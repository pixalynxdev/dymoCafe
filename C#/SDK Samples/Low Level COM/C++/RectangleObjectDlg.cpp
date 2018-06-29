//***********************************************************************
// RECTANGLEOBJECTLDLG.CPP
// Written 04/15/99 by Alexei Zapari
//
// This implements supporting dialog with ID: IDD_RECTANGLE_OBJECT_DIALOG
// for main MFC application.
//
// This program is meant to demonstrate the methods used to communicate with
// the Dymo Label Software DLL via LabelServer Automation Server interface 
// from C++.
//
// This code was written and tested using MS Visual C++ 6.0, under Windows 95.
//
// Copyright 1996,2002 DYMO Corporation
//
// Permission to use, copy, modify, and distribute this software for any
// purpose and without fee is hereby granted.
//
//***********************************************************************

// RectangleObjectDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VC Tester.h"
#include "RectangleObjectDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRectangleObjectDlg dialog


CRectangleObjectDlg::CRectangleObjectDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRectangleObjectDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRectangleObjectDlg)
	m_bFilled = FALSE;
	m_Border = 0;
	m_BorderColor = _T("");
	m_FillColor = _T("");
	//}}AFX_DATA_INIT
}


void CRectangleObjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRectangleObjectDlg)
	DDX_Check(pDX, IDC_BFILLED, m_bFilled);
	DDX_Text(pDX, IDC_RECTANGLEOBJ_BORDER, m_Border);
	DDX_Text(pDX, IDC_RECTANGLEOBJ_BORDERCOLOR, m_BorderColor);
	DDX_Text(pDX, IDC_RECTANGLEOBJ_FILLCOLOR, m_FillColor);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRectangleObjectDlg, CDialog)
	//{{AFX_MSG_MAP(CRectangleObjectDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRectangleObjectDlg message handlers
