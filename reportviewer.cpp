// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "reportviewer.h"

// Dispatch interfaces referenced by this interface
#include "font.h"

/////////////////////////////////////////////////////////////////////////////
// CReportViewer

IMPLEMENT_DYNCREATE(CReportViewer, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CReportViewer properties

/////////////////////////////////////////////////////////////////////////////
// CReportViewer operations

void CReportViewer::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CReportViewer::GetBackColor()
{
	unsigned long result;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CReportViewer::SetRefFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

void CReportViewer::SetFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

COleFont CReportViewer::GetFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

long CReportViewer::GetWindow()
{
	long result;
	InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CReportViewer::Clear()
{
	InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CReportViewer::PrintOut(LPCTSTR Printer)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Printer);
}

void CReportViewer::SetBorderStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CReportViewer::GetBorderStyle()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CReportViewer::Copy()
{
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CReportViewer::CopyAll()
{
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CReportViewer::LoadText(LPCTSTR Filename, long* Offset, long Length)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PI4 VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename, Offset, Length);
}

void CReportViewer::LoadRTF(LPCTSTR Filename)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename);
}

void CReportViewer::SaveText(LPCTSTR Filename, BOOL Overwrite)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename, Overwrite);
}

void CReportViewer::SaveRTF(LPCTSTR Filename, BOOL Overwrite)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename, Overwrite);
}

void CReportViewer::ExecuteReport(LPDISPATCH Datasource, LPCTSTR Template, LPCTSTR Section, long Options, float Sigma, LPCTSTR ActivityUnits, float ActivityMultiplier)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_BSTR VTS_BSTR VTS_I4 VTS_R4 VTS_BSTR VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Datasource, Template, Section, Options, Sigma, ActivityUnits, ActivityMultiplier);
}

BOOL CReportViewer::IsWarning(long StatusCode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		StatusCode);
	return result;
}

BOOL CReportViewer::IsError(long StatusCode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		StatusCode);
	return result;
}

CString CReportViewer::Message(long StatusCode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		StatusCode);
	return result;
}
