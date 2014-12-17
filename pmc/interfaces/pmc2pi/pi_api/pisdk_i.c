/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu May 10 10:22:18 2001
 */
/* Compiler settings for PISDK.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID LIBID_PISDK = {0x0EE075CE,0x8C31,0x11D1,{0xBD,0x73,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_IPISDK = {0x3BCB2DC0,0x5F66,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_Aliases = {0xCA8E50B1,0x168E,0x11d2,{0xBE,0xE7,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_Archive = {0x7B09CB75,0x70EA,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_Archives = {0x7B09CB74,0x70EA,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_AttributeSets = {0x53E80B41,0x2319,0x11d2,{0xBE,0xEA,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__Chunk = {0xCBBE8EA4,0xCB71,0x11D1,{0x80,0xD8,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const IID IID__ChunkyList = {0xCBBE8EA2,0xCB71,0x11D1,{0x80,0xD8,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const IID IID_DigitalState = {0xE56BEEA7,0x60FB,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_EventPipe = {0x36916A92,0x53F9,0x11d2,{0xBE,0xFA,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__IPI3Server = {0xC096BF22,0x9454,0x11d1,{0xA7,0xC2,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_IPISecurity = {0xA874ACE0,0x8717,0x11d3,{0xBA,0x43,0x00,0xC0,0x4F,0x42,0x8C,0x95}};


const IID IID_LogMessage = {0xC237C0E2,0x725D,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_LogMessages = {0xC237C0E3,0x725D,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_MessageLog = {0xC237C0E1,0x725D,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIConstants = {0x6D734081,0xE793,0x11d2,{0xBF,0x2A,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIContext = {0x17298372,0x98EE,0x11d2,{0xBF,0x16,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIContexts = {0x17298371,0x98EE,0x11d2,{0xBF,0x16,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIConstant = {0x6D734082,0xE793,0x11d2,{0xBF,0x2A,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIGroup = {0x1ABD2A34,0x61C6,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIGroups = {0x1ABD2A33,0x61C6,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIMisc1 = {0x4B16DB63,0xBC45,0x11d2,{0xBF,0x1A,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIMisc2 = {0x4B16DB64,0xBC45,0x11d2,{0xBF,0x1A,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIPoint = {0x72AE6733,0x602E,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIPoints = {0x72AE6732,0x602E,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PISDKVersion = {0x3BCB2DC4,0x5F66,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PITextFile = {0x7B09CB73,0x70EA,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PITextFiles = {0x7B09CB72,0x70EA,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIUser = {0x1ABD2A32,0x61C6,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIUsers = {0x1ABD2A31,0x61C6,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PointAttribute = {0x72AE673D,0x602E,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PointAttributes = {0x72AE6738,0x602E,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PointClass = {0xE56BEEA9,0x60FB,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PointClasses = {0xE56BEEA8,0x60FB,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__PointList = {0xEF9DDE15,0x265F,0x11D2,{0x80,0xF4,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const IID IID_PointSources = {0x6ED26310,0xDA02,0x11d1,{0xBE,0xDF,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_Server = {0x3BCB2DC6,0x5F66,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_ServerManagement = {0x7B09CB71,0x70EA,0x11d1,{0xBD,0x6E,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_Servers = {0x3BCB2DC3,0x5F66,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_ServerVersion = {0x72AE6731,0x602E,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_StateSet = {0xE56BEEA6,0x60FB,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_StateSets = {0xE56BEEA5,0x60FB,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_IPIVersion = {0xA874ACE1,0x8717,0x11d3,{0xBA,0x43,0x00,0xC0,0x4F,0x42,0x8C,0x95}};


const IID IID_PIBatchDB = {0x4B16DB61,0xBC45,0x11d2,{0xBF,0x1A,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIEventRecord = {0x36916A97,0x53F9,0x11d2,{0xBE,0xFA,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIEventRecords = {0x36916A98,0x53F9,0x11d2,{0xBE,0xFA,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID_PIModuleDB = {0x4B16DB62,0xBC45,0x11d2,{0xBF,0x1A,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__IGenericPIPoint = {0x3970D901,0xA346,0x11d1,{0xBE,0xD8,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__IGenericPIPoint2 = {0x58FADE51,0x2D11,0x11d4,{0x85,0x56,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID__IGenericPIPoint3 = {0x1C98A274,0x3FCF,0x4583,{0xA7,0xB6,0x8E,0x1F,0x75,0x05,0x90,0xFB}};


const IID IID__IGenericServer = {0x44F90291,0x9DB3,0x11d1,{0xBE,0xD7,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__IGenericServer2 = {0xD9505641,0x206C,0x11d4,{0x85,0x4E,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_IManagedObject = {0xCD07A641,0xB329,0x11d1,{0x80,0xCD,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const IID IID_IObjectManager = {0xCD07A642,0xB329,0x11d1,{0x80,0xCD,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const IID IID_IPointAttributes = {0x4CCAEAF1,0xFCE8,0x11d3,{0x85,0x43,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID__AttributeSetsEvents = {0xE5BDFC21,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__EventPipeEvents = {0x9E679FD4,0xDE8C,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID__PIContextsEvents = {0xE5BDFC24,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PIGroupEvents = {0xE5BDFC27,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PIGroupsEvents = {0xB207A977,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PIPointsEvents = {0xE5BDFC2A,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PIUserEvents = {0xE5BDFC2D,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PIUsersEvents = {0xB207A971,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PointAttributesEvents = {0xE5BDFC30,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PointClassesEvents = {0xB207A974,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PointListEvents = {0xB207A97B,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__ServerEvents = {0xB207A965,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__ServersEvents = {0xB207A961,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__StateSetEvents = {0xE5BDFC33,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__StateSetsEvents = {0xB207A968,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID_ExceptionSpecs = {0xF293A834,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_IPICalculation = {0xF293A835,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID__ListData = {0x1415B821,0xF398,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID IID__PIData = {0x1CB86961,0xCE23,0x11d2,{0xBF,0x1D,0x00,0x60,0xB0,0x29,0x01,0x78}};


const IID IID__PIValue = {0xF293A839,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID__PIValues = {0xF293A83A,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_PointValue = {0xF293A83B,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_PointValueList = {0xF293A83F,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_PointValueLists = {0xF293A83E,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_PointValues = {0xF293A83D,0xD998,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID IID_PIModuleTemplate = {0x0137BA55,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIModuleTemplates = {0x0137BA57,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIHeading = {0x0137BA49,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIHeadings = {0x146ACF39,0xC69D,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIHeadingSet = {0xDA4F8DC3,0x17C9,0x11d4,{0xBA,0x6C,0x00,0xC0,0x4F,0x42,0x8C,0x95}};


const IID IID_PIHeadingSets = {0xE92E2879,0x3572,0x43a5,{0x90,0xB3,0x5B,0x40,0xBB,0xC0,0x7D,0x54}};


const IID IID_PIModules = {0x0137BA4A,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIModule = {0x0137BA4D,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID__PIModuleList = {0x8513F282,0x0D53,0x11d3,{0x9E,0xE7,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID__PIModuleVersionList = {0x9181CED5,0x1ACA,0x4399,{0xA1,0xC5,0x11,0x64,0x86,0xF5,0x7C,0xE5}};


const IID IID_PIAliases = {0x0137BA4F,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIAlias = {0x0137BA54,0xC6CF,0x11d2,{0x9E,0xDF,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PIProperties = {0x12F8D021,0xB419,0x11d3,{0xBA,0x4B,0x00,0xC0,0x4F,0x42,0x8C,0x95}};


const IID IID_PIProperty = {0x12F8D022,0xB419,0x11d3,{0xBA,0x4B,0x00,0xC0,0x4F,0x42,0x8C,0x95}};


const IID IID_PIUnitBatches = {0x114D0B42,0xCAB7,0x11d2,{0x9A,0x4B,0x00,0x80,0xC7,0x1A,0xFE,0x8D}};


const IID IID_PIUnitBatch = {0x114D0B41,0xCAB7,0x11d2,{0x9A,0x4B,0x00,0x80,0xC7,0x1A,0xFE,0x8D}};


const IID IID__PIUnitBatchList = {0x88627E08,0xB1BD,0x11d3,{0xBA,0x4B,0x00,0xC0,0x4F,0x42,0x8C,0x95}};


const IID IID_PISubBatches = {0x1FD8FFA1,0xCB6F,0x11d2,{0x9A,0x4F,0x00,0x80,0xC7,0x1A,0xFE,0x8D}};


const IID IID_PISubBatch = {0x1FD8FFA2,0xCB6F,0x11d2,{0x9A,0x4F,0x00,0x80,0xC7,0x1A,0xFE,0x8D}};


const IID IID__PISubBatchList = {0xB83E8504,0x0A64,0x44b9,{0xA5,0x5E,0x93,0xDB,0x4D,0xA0,0x75,0x9D}};


const IID IID_PIBatch = {0x1C0403D1,0xCA97,0x11d2,{0x9A,0x49,0x00,0x80,0xC7,0x1A,0xFE,0x8D}};


const IID IID_PIBatches = {0xD782D4AB,0x944C,0x4ed7,{0xA3,0x49,0xF8,0x3B,0xC6,0x89,0x95,0xFC}};


const IID IID__PIBatchList = {0xF676149D,0x0E44,0x11d3,{0x9E,0xE7,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PITransferRecordDB = {0x48B118EF,0x07D2,0x11d3,{0x9E,0xE6,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PITransferRecord = {0x48B118F0,0x07D2,0x11d3,{0x9E,0xE6,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID__PITransferRecordList = {0x8513F286,0x0D53,0x11d3,{0x9E,0xE7,0x08,0x00,0x09,0xDC,0x95,0x4F}};


const IID IID_PICampaignDB = {0x77EE4938,0xD779,0x40e9,{0x84,0xC1,0xE9,0x64,0xC1,0x26,0x03,0xA2}};


const IID IID_PICampaign = {0x0001D6BC,0x7CDE,0x4d16,{0x84,0x55,0x59,0x36,0x28,0x71,0x92,0x42}};


const IID IID__PICampaignList = {0xA980DDB0,0xA1C1,0x466e,{0xB6,0x48,0xFC,0x4B,0x9D,0x92,0x9C,0x3C}};


const IID DIID__DAttributeSetsEvents = {0xE5BDFC20,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DEventPipeEvents = {0x9E679FD2,0xDE8C,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const IID DIID__DPIContextsEvents = {0xE5BDFC23,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPIGroupEvents = {0xE5BDFC26,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPIGroupsEvents = {0xB207A976,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPIPointsEvents = {0xE5BDFC29,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPIUserEvents = {0xE5BDFC2C,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPIUsersEvents = {0xB207A970,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPointAttributesEvents = {0xE5BDFC2F,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPointClassesEvents = {0xB207A973,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DPointListEvents = {0xB207A97A,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DServerEvents = {0xB207A964,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DServersEvents = {0xAA6E6BB1,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DStateSetEvents = {0xE5BDFC32,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const IID DIID__DStateSetsEvents = {0xB207A967,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PISDK = {0x3BCB2DC2,0x5F66,0x11d1,{0xBD,0x64,0x00,0x60,0xB0,0x29,0x01,0x78}};


const CLSID CLSID_ChunkyList = {0xCBBE8EA3,0xCB71,0x11D1,{0x80,0xD8,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const CLSID CLSID_ListData = {0x856BB1B1,0xF39B,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIData = {0x34B81AB1,0xF39B,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PointList = {0xEF9DDE16,0x265F,0x11D2,{0x80,0xF4,0x00,0xA0,0x24,0x0B,0x7F,0xDC}};


const CLSID CLSID_EventPipeEvents = {0x9E679FD1,0xDE8C,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const CLSID CLSID_PI3Server = {0x70D70E42,0xB239,0x11d2,{0xBF,0x19,0x00,0x60,0xB0,0x29,0x01,0x78}};


const CLSID CLSID_PI3PIPoint = {0x7450B8E0,0xB46C,0x11d2,{0xBF,0x19,0x00,0x60,0xB0,0x29,0x01,0x78}};


const CLSID CLSID_AttributeSetsEvents = {0xE5BDFC22,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIContextsEvents = {0xE5BDFC25,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIGroupEvents = {0xE5BDFC28,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIGroupsEvents = {0xB207A978,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIPointsEvents = {0xE5BDFC2B,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIUserEvents = {0xE5BDFC2E,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIUsersEvents = {0xB207A972,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIValue = {0x13029331,0xDDAF,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const CLSID CLSID_PIValues = {0x13029332,0xDDAF,0x11d3,{0x85,0x3F,0x00,0xC0,0x4F,0x45,0xD1,0xDA}};


const CLSID CLSID_PointAttributesEvents = {0xE5BDFC31,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PointClassesEvents = {0xB207A975,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PointListEvents = {0xB207A97C,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_ServerEvents = {0xB207A966,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_ServersEvents = {0xB207A962,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_StateSetEvents = {0xE5BDFC34,0xF464,0x11d2,{0xBD,0x72,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_StateSetsEvents = {0xB207A969,0xF3A0,0x11d2,{0xBD,0x71,0x00,0xC0,0x4F,0x77,0x9E,0xB2}};


const CLSID CLSID_PIModuleVersionList = {0xF303E541,0xB93A,0x4a9a,{0x9A,0x8A,0x7F,0x2F,0xEC,0x36,0x86,0xC2}};


const CLSID CLSID_PIModuleList = {0x62D74344,0xA978,0x4735,{0x90,0x3A,0xBB,0x89,0x5D,0x50,0x7F,0x6F}};


const CLSID CLSID_PIUnitBatchList = {0xA0B165C8,0x1022,0x4507,{0x90,0x83,0x5E,0x0A,0x88,0x8B,0x0C,0x71}};


const CLSID CLSID_PIBatchList = {0x7C67ED9B,0x324B,0x425c,{0x82,0xC2,0x00,0xFC,0x78,0x18,0x40,0xA2}};


const CLSID CLSID_PICampaignList = {0x5DAB3074,0x825F,0x4c15,{0x99,0x82,0x0A,0xD5,0x88,0x70,0x17,0xEB}};


const CLSID CLSID_PITransferRecordList = {0x399B78C0,0x0A64,0x4185,{0xBB,0xB5,0xCA,0x20,0xE1,0x90,0x80,0x23}};


const CLSID CLSID_PISubBatchList = {0xBE59F6C0,0xF418,0x4c48,{0xA6,0xE8,0xD6,0x5D,0xE3,0x2F,0xDF,0x57}};


#ifdef __cplusplus
}
#endif

