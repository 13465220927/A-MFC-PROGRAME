//Download by http://www.NewXing.com
#if !defined(AFX_RDOCOLUMNS_H__17AA9C9D_A1B7_41E2_9415_4264A79C2466__INCLUDED_)
#define AFX_RDOCOLUMNS_H__17AA9C9D_A1B7_41E2_9415_4264A79C2466__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class C_rdoColumn;

/////////////////////////////////////////////////////////////////////////////
// CrdoColumns wrapper class

class CrdoColumns : public COleDispatchDriver
{
public:
	CrdoColumns() {}		// Calls COleDispatchDriver default constructor
	CrdoColumns(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoColumns(const CrdoColumns& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	C_rdoColumn GetItem(const VARIANT& Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RDOCOLUMNS_H__17AA9C9D_A1B7_41E2_9415_4264A79C2466__INCLUDED_)