#pragma once	//��ֹͷ�ļ��ظ�����
#include <iostream>	//�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�������ռ�
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
		
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��¼ְ������

	int m_EmpNum;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	 
	//ְ������ָ��
	Worker * *m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ����
	int isExist(int id);

	//�޸�ְ����Ϣ
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();
	
	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();


};