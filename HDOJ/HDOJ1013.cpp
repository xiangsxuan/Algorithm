//����洢��int,�㷨���ǳ�����,д�˰��������.....
//����洢���ַ���,���򵥺ܶ�

//�ַ���˼������:���ַ���������,��ô�жϽ����ı�׼��ʲô?���ַ����ĳ��ȵ���1���߸�λ֮��С��10,��Ȼ��һ��Ҫ�򵥺ܶ�

//while�жϲ������Ե�ѭ����,Ҳ���Ե����ж���,��ϸ�������΢����
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while (cin>>s && s[0]!='0') {
		while (s.size() > 1) {
			int ret = 0;
			for (int i = 0; i < s.size(); i++) {
				ret += (s[i]-'0');
			}
			s = to_string(ret);
		}
		cout << s<<endl;
	}

	return 0;
}
