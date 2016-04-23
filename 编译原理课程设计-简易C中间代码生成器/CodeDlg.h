
// ����ԭ��γ����-����C�м����������Dlg.h : ͷ�ļ�
//

#pragma once
struct status
{
	bool init;
	int num;
	double value;
	status(int n = 0, double val = 0, bool in = false)
	{
		init = in;
		num = n;
		value = val;
	}
};
// C����ԭ��γ���Ƽ���C�м����������Dlg �Ի���
class CodeDlg : public CDialogEx
{
// ����
public:
	CodeDlg(CWnd* pParent = NULL);	// ��׼���캯��
	CString midcodes, tmpcs, totalcodes;
// �Ի�������
	enum { IDD = IDD_C_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLoad();
	afx_msg void OnBnClickedExecute();
	afx_msg void OnBnClickedClear();
	afx_msg void OnStnClickedMiddlecodes();
	afx_msg void OnStnClickedCodes();
	void AppendText(int controlId, CString strAdd);
	void ShowCodes(int controlId, CString strAdd);
	double calculation();
	void booleanstatement();
	void ifstatement();
	void statement();
	void whilestatement();
	void forstatement();
	void declare();
	void entrance();
	void compoundstatement();
	int replacelabel(int,int);
	void findallsharps();
	CFont font;
	afx_msg void OnBnClickedReplace();
	

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedConpile();
	afx_msg void OnBnClickedConfirm();
	afx_msg void OnBnClickedTest();
	afx_msg void OnEnChangeInput();
};
