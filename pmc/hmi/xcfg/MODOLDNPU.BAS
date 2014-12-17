Attribute VB_Name = "modOldNPU"
Option Explicit

'����������żУ��ͻس�
Public Sub AddLRCandCR(InputStr As String)
    Dim i As Integer
    Dim A As Integer
     
    If Len(InputStr) < 2 Then
        Exit Sub
    End If
     
    A = 0
    For i = 2 To Len(InputStr)
       A = A Xor Asc(Mid(InputStr, i, 1))
    Next i
       
    InputStr = InputStr & ascc((A And &HF0) / 16)
    InputStr = InputStr & ascc(A And &HF)
    InputStr = InputStr & vbCr
End Sub

Public Function ascc(cb As Integer) As String
    Dim HextoAsc(16) As String * 1
    HextoAsc(0) = "0"
    HextoAsc(1) = "1"
    HextoAsc(2) = "2"
    HextoAsc(3) = "3"
    HextoAsc(4) = "4"
    HextoAsc(5) = "5"
    HextoAsc(6) = "6"
    HextoAsc(7) = "7"
    HextoAsc(8) = "8"
    HextoAsc(9) = "9"
    HextoAsc(10) = "A"
    HextoAsc(11) = "B"
    HextoAsc(12) = "C"
    HextoAsc(13) = "D"
    HextoAsc(14) = "E"
    HextoAsc(15) = "F"
    
    If cb >= 0 And cb <= 15 Then
        ascc = HextoAsc(cb)
    Else
        ascc = "0"
    End If
End Function

Function YTStringtoSingle(StrData As String) As Single
    
    '�������ֽڱ�ʾ����ת��Ϊʵ��
    '��ʾ�������£�
    ' +---------+----------------+---------------+
    ' |   A0    |       A1       |      A2       |
    ' +---+-----+-------+--------+-------+-------+
    ' | P | X   |  10e3 | 10e2   |  10e1 | 10e0  |
    ' +---+-----+-------+--------+-------+-------+
    '����PΪ0ʱ����ʾ������Ϊ8ʱ����ʾ����
    'X��ʾ�м�λС��,0~7
    
    Dim CharTmp As String * 1
    Dim CharValue As Integer
    Dim FinalValue As Single
    
    If Len(StrData) < 6 Then
        GoTo DataError
    End If
    
    CharTmp = Mid(StrData, 6, 1)
    CharValue = uascc(CharTmp)
    If CharValue >= 0 Or CharValue <= 9 Then
        FinalValue = CharValue
    Else
        GoTo DataError
    End If
    
    CharTmp = Mid(StrData, 5, 1)
    CharValue = uascc(CharTmp)
    If CharValue >= 0 Or CharValue <= 9 Then
        FinalValue = FinalValue + CharValue * 10
    Else
        GoTo DataError
    End If
    
    CharTmp = Mid(StrData, 4, 1)
    CharValue = uascc(CharTmp)
    If CharValue >= 0 Or CharValue <= 9 Then
        FinalValue = FinalValue + CharValue * 100
    Else
        GoTo DataError
    End If
    
    CharTmp = Mid(StrData, 3, 1)
    CharValue = uascc(CharTmp)
    If CharValue >= 0 Or CharValue <= 9 Then
        FinalValue = FinalValue + CharValue * 1000
    Else
        GoTo DataError
    End If
    
    CharTmp = Mid(StrData, 2, 1)
    CharValue = uascc(CharTmp)
    Select Case CharValue
        Case 0:
        Case 1:
            FinalValue = FinalValue / 10
        Case 2:
            FinalValue = FinalValue / 100
        Case 3:
            FinalValue = FinalValue / 1000
        Case 4:
            FinalValue = FinalValue / 10000!
        Case 5:
            FinalValue = FinalValue / 100000!
        Case 6:
            FinalValue = FinalValue / 1000000!
        Case 7:
            FinalValue = FinalValue / 1E+07!
        Case Else:
            GoTo DataError
    End Select

    CharTmp = Mid(StrData, 1, 1)
    If CharTmp = "0" Then
    ElseIf CharTmp = "8" Then
        FinalValue = -FinalValue
    Else
        GoTo DataError
    End If
    
    YTStringtoSingle = FinalValue
    
    Exit Function

DataError:

    YTStringtoSingle = -999999
    
End Function


Function YTSingletoString(ByVal RealNum As Single) As String
    '��ʵ��ת��Ϊ�����ֽڱ�ʾ����
    '��ʾ�������£�
    ' +---------+----------------+---------------+
    ' |   A0    |       A1       |      A2       |
    ' +---+-----+-------+--------+-------+-------+
    ' | P | X   |  10e3 | 10e2   |  10e1 | 10e0  |
    ' +---+-----+-------+--------+-------+-------+
    ' | 1 | 2   |  3    |   4    |   5   |  6    |
    ' +---+-----+-------+--------+-------+-------+
    '����PΪ0ʱ����ʾ������Ϊ8ʱ����ʾ����
    'X��ʾ�м�λС��,0~7
    
    Dim StrData As String
    Dim TmpStr As String
    Dim PointPosi As Integer
    Dim IntPart As Long
    Dim FracPart As Long
    
    StrData = String(6, " ")
    
    If RealNum > 0 Then
        Mid(StrData, 1, 1) = "0"
    ElseIf RealNum < 0 Then
        RealNum = -RealNum
        Mid(StrData, 1, 1) = "8"
    Else
        StrData = String(6, "0")
        YTSingletoString = StrData
        Exit Function
    End If
    
    If RealNum >= 10000! Or RealNum < 0.0000001! Then
        GoTo DataError
    End If
    
    IntPart = Int(RealNum)
    FracPart = Int((RealNum - Int(RealNum)) * 10000000#)
    
    TmpStr = Format(IntPart, "0000") & Format(FracPart, "0000000")
    
    Dim i As Long
    For i = 1 To Len(TmpStr)
        If Mid(TmpStr, i, 1) <> "0" Then
            Exit For
        End If
    Next i
        
    If i <= 8 Then
        Mid(StrData, 3, 1) = Mid(TmpStr, i, 1)
        Mid(StrData, 4, 1) = Mid(TmpStr, i + 1, 1)
        Mid(StrData, 5, 1) = Mid(TmpStr, i + 2, 1)
        Mid(StrData, 6, 1) = Mid(TmpStr, i + 3, 1)
        '��λС��
        Mid(StrData, 2, 1) = i - 1
    ElseIf i = 9 Then
        Mid(StrData, 3, 1) = "0"
        Mid(StrData, 4, 1) = Mid(TmpStr, i, 1)
        Mid(StrData, 5, 1) = Mid(TmpStr, i + 1, 1)
        Mid(StrData, 6, 1) = Mid(TmpStr, i + 2, 1)
        '��λС��
        Mid(StrData, 2, 1) = 7
    ElseIf i = 10 Then
        Mid(StrData, 3, 1) = "0"
        Mid(StrData, 4, 1) = "0"
        Mid(StrData, 5, 1) = Mid(TmpStr, i, 1)
        Mid(StrData, 6, 1) = Mid(TmpStr, i + 1, 1)
        '��λС��
        Mid(StrData, 2, 1) = 7
    ElseIf i = 11 Then
        Mid(StrData, 3, 1) = "0"
        Mid(StrData, 4, 1) = "0"
        Mid(StrData, 5, 1) = "0"
        Mid(StrData, 6, 1) = Mid(TmpStr, i, 1)
        '��λС��
        Mid(StrData, 2, 1) = 7
    Else
        StrData = String(6, "0")
    End If
        
    YTSingletoString = StrData
    Exit Function
    
DataError:

    Debug.Print "Error Data to convert to 3 byte BDC code:", RealNum
    StrData = String(6, "W")
    YTSingletoString = StrData
End Function

Function uascc(he As String) As Integer

    '��"0"~"F"���0~15������
    If he >= "0" And he <= "9" Then
        uascc = Asc(he) - Asc("0")
    ElseIf he >= "A" And he <= "F" Then
        uascc = Asc(he) - Asc("A") + 10
    Else
        uascc = -1  'error
    End If
    
End Function
