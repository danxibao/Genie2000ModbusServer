#if !defined(AFX_ANALYSISEDITOR_H__C0509C58_2395_4B56_A850_DBE348D381D1__INCLUDED_)
#define AFX_ANALYSISEDITOR_H__C0509C58_2395_4B56_A850_DBE348D381D1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CAnalysisEditor wrapper class

class CAnalysisEditor : public CWnd
{
protected:
	DECLARE_DYNCREATE(CAnalysisEditor)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x816cae23, 0xd460, 0x11d1, { 0x84, 0xa8, 0x0, 0xa0, 0x24, 0x8c, 0x8e, 0x7b } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetSequence(LPDISPATCH Datasource, BOOL Alpha, BOOL ReadOnly);
	void GetSequenceChanges(LPDISPATCH Datasource);
	BOOL IsChanged();
	void NewSequence(BOOL Alpha, BOOL NAI);
	BOOL IsWarning(long StatusCode);
	BOOL IsError(long StatusCode);
	CString Message(long StatusCode);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANALYSISEDITOR_H__C0509C58_2395_4B56_A850_DBE348D381D1__INCLUDED_)
