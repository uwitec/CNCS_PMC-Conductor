#if !defined(AFX_DLGTRENDTIME_H__26AB77EC_576D_4E96_BEC3_73984FF7235F__INCLUDED_)
#define AFX_DLGTRENDTIME_H__26AB77EC_576D_4E96_BEC3_73984FF7235F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgTrendTime.h : header file
//

#include "resource.h"

/////////////////////////////////////////////////////////////////////////////
// CDlgTrendTime dialog

class CDlgTrendTime : public CDialog
{
// Construction
public:
	CDlgTrendTime(CWnd* pParent = NULL);   // standard constructor
    COLORREF cuvColor[10];

// Dialog Data
	//{{AFX_DATA(CDlgTrendTime)
	enum { IDD = IDD_TREND_TIME };
	COleDateTime	m_date;
	COleDateTime	m_time;
	int		m_mode;
	BOOL	m_ca1;
	BOOL	m_ca2;
	BOOL	m_ca3;
	BOOL	m_ca4;
	BOOL	m_ca5;
	float	m_max1;
	float	m_max2;
	float	m_max3;
	float	m_max4;
	float	m_max5;
	float	m_min1;
	float	m_min2;
	float	m_min3;
	float	m_min4;
	float	m_min5;
	CString	m_tag1;
	CString	m_tag2;
	CString	m_tag3;
	CString	m_tag4;
	CString	m_tag5;
	BOOL	m_autoScale;
	CString	m_tag10;
	CString	m_tag6;
	CString	m_tag7;
	CString	m_tag8;
	CString	m_tag9;
	BOOL	m_ca10;
	BOOL	m_ca6;
	BOOL	m_ca7;
	BOOL	m_ca8;
	BOOL	m_ca9;
	float	m_max10;
	float	m_max6;
	float	m_max7;
	float	m_max8;
	float	m_max9;
	float	m_min10;
	float	m_min6;
	float	m_min7;
	float	m_min8;
	float	m_min9;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgTrendTime)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgTrendTime)
	afx_msg void OnSave();
	afx_msg void OnLoad();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void On1();
	afx_msg void On2();
	afx_msg void On3();
	afx_msg void On4();
	afx_msg void On5();
	afx_msg void On6();
	afx_msg void On7();
	afx_msg void On8();
	afx_msg void On9();
	afx_msg void On10();
	afx_msg void OnDot();
	afx_msg void OnSub();
	afx_msg void OnDel();
	afx_msg void OnSetfocusMax1();
	afx_msg void OnSetfocusMax2();
	afx_msg void OnSetfocusMax3();
	afx_msg void OnSetfocusMax4();
	afx_msg void OnSetfocusMax5();
	afx_msg void OnSetfocusMin1();
	afx_msg void OnSetfocusMin2();
	afx_msg void OnSetfocusMin3();
	afx_msg void OnSetfocusMin4();
	afx_msg void OnSetfocusMin5();
	afx_msg void OnSetfocusMax6();
	afx_msg void OnSetfocusMax7();
	afx_msg void OnSetfocusMax8();
	afx_msg void OnSetfocusMax9();
	afx_msg void OnSetfocusMax10();
	afx_msg void OnSetfocusMin6();
	afx_msg void OnSetfocusMin7();
	afx_msg void OnSetfocusMin8();
	afx_msg void OnSetfocusMin9();
	afx_msg void OnSetfocusMin10();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	CEdit* pBoxOne;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGTRENDTIME_H__26AB77EC_576D_4E96_BEC3_73984FF7235F__INCLUDED_)
