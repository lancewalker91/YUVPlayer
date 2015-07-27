
// YUVPlayerDlg.h : 头文件
//

#pragma once

#include "SettingDlg.h"

// CYUVPlayerDlg 对话框
class CYUVPlayerDlg : public CDialogEx
{
// 构造
public:
	CYUVPlayerDlg(CWnd* pParent = NULL);	// 标准构造函数
    ~CYUVPlayerDlg();
// 对话框数据
	enum { IDD = IDD_YUVPLAYER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

private:
    CSettingDlg* m_pSettingDlg;
    int m_nWidth;
    int m_nHeight;
    int m_nFps;
    int m_nYuvFormat;
    BOOL m_fLoop;

public:
    void GetParameters(int width, int height, int fps, int fmt, BOOL loop)
    {
        m_nWidth = width;
        m_nHeight = height;
        m_nFps = fps;
        m_nYuvFormat = fmt;
        m_fLoop = loop;
    }

    void ShowSettingWindow();

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnHelpAbout();
    afx_msg void OnBnClickedButtonSet();
    afx_msg void OnBnClickedButtonOpen();
    afx_msg void OnBnClickedButtonSave();
    afx_msg void OnBnClickedButtonPlay();
};
