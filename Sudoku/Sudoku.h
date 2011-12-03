// Sudoku.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSudokuApp:
// See Sudoku.cpp for the implementation of this class
//

class CSudokuApp : public CWinApp
{
public:
	CSudokuApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

public:
	virtual int ExitInstance();
protected:
	GdiplusStartupInput m_gdiplusStartupInput;
	ULONG_PTR m_gdiplusToken;
};

extern CSudokuApp theApp;