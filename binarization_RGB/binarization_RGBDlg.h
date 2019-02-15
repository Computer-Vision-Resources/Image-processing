
// binarization_RGBDlg.h: 헤더 파일
//

#pragma once
#include "imageSrc\MyImage.h"


// CbinarizationRGBDlg 대화 상자
class CbinarizationRGBDlg : public CDialogEx
{
// 생성입니다.
public:
	CbinarizationRGBDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BINARIZATION_RGB_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonInput();
	afx_msg void OnBnClickedRadioRed();
	afx_msg void OnBnClickedRadioGreen();
	afx_msg void OnBnClickedRadioBlue();
	afx_msg void OnBnClickedButtonBinarization();

protected:
	CByteImage		m_imageIn;
	CByteImage		m_imageOut;
	CByteImage		m_imageBG;
public:
	int bi_r = 0;
	int bi_g = 0;
	int bi_b = 0;
	afx_msg void OnBnClickedButtonRedbinarization();
	afx_msg void OnBnClickedButtonGreenbinarization();
	afx_msg void OnBnClickedButtonBluebinarization();
};
