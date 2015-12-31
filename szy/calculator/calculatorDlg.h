
// calculatorDlg.h : 头文件
//

#pragma once


// CcalculatorDlg 对话框
class CcalculatorDlg : public CDialogEx
{
// 构造
public:
	CcalculatorDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	void check(CString &ts);
public:
	CString m_str;
	int flag;
	double temp;
	double temp1,temp2;
	afx_msg void qing();

	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedDot();
	afx_msg void OnBnClickedcalculate();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedjian();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedcheng();
	afx_msg void OnBnClickedchu();
	afx_msg void OnBnClickedmo();
	afx_msg void OnBnClickedpingfang();
	afx_msg void OnBnClickedgenhao();
	afx_msg void OnBnClickedjian2();
	afx_msg void OnBnClickedfuhao();
	afx_msg void OnBnClickedchexiao();
	afx_msg void OnBnClickedm1();
	afx_msg void OnBnClickedm2();
	afx_msg void OnBnClickedm3();
	afx_msg void OnBnClickedabout();
	afx_msg void OnBnClickedxfen1();
};
