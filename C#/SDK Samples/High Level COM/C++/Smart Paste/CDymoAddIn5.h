// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CDymoAddIn5 wrapper class

class CDymoAddIn5 : public COleDispatchDriver
{
public:
	CDymoAddIn5(){} // Calls COleDispatchDriver default constructor
	CDymoAddIn5(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDymoAddIn5(const CDymoAddIn5& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IDymoAddIn5 methods
public:
	BOOL Open(LPCTSTR FileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FileName);
		return result;
	}
	BOOL Save()
	{
		BOOL result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SaveAs(LPCTSTR FileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FileName);
		return result;
	}
	BOOL Print(long Copies, BOOL bShowDialog)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BOOL ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Copies, bShowDialog);
		return result;
	}
	void Hide()
	{
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Show()
	{
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SysTray(BOOL State)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, State);
	}
	void Quit()
	{
		InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_FileName()
	{
		CString result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL SelectPrinter(LPCTSTR Printer)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Printer);
		return result;
	}
	CString GetDymoPrinters()
	{
		CString result;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetMRULabelFiles()
	{
		CString result;
		InvokeHelper(0x12d, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL Open2(LPCTSTR FileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x12e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FileName);
		return result;
	}
	long GetMRULabelFileCount()
	{
		long result;
		InvokeHelper(0x12f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetMRULabelFileName(long Index)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x130, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Index);
		return result;
	}
	BOOL OpenMRULabelFile(long Index)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x131, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Index);
		return result;
	}
	BOOL OpenMRULabelFileByName(LPCTSTR FileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x132, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FileName);
		return result;
	}
	BOOL Print2(long Copies, BOOL bShowDlg, long Tray)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BOOL VTS_I4 ;
		InvokeHelper(0x191, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Copies, bShowDlg, Tray);
		return result;
	}
	long GetCurrentPaperTray()
	{
		long result;
		InvokeHelper(0x192, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void StartPrintJob()
	{
		InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void EndPrintJob()
	{
		InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL IsTwinTurboPrinter(LPCTSTR PrinterName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xcb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, PrinterName);
		return result;
	}
	CString GetCurrentPrinterName()
	{
		CString result;
		InvokeHelper(0xce, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL SmartPasteFromClipboard()
	{
		BOOL result;
		InvokeHelper(0x259, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SmartPasteFromFile(LPCTSTR FileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x25a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FileName);
		return result;
	}

	// IDymoAddIn5 properties
public:

};
