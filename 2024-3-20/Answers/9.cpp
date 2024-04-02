#include<iostream>
using namespace std;

//==========================================================
// 函数名称： string_size
// 函数描述： 获取字符串内字符个数
// 入口参数： 字符串
// 返回参数： 字符的个数
//==========================================================
int string_size(char ch[]) {
    int size = 0;
    for (size = 0; size < 41; size++)
        if (ch[size] == '\0')
            break;
    return size;
}
//==========================================================
// 函数名称： copy_string
// 函数描述： 将字符串的值复制到另一个字符串内
// 入口参数： 输入字符串，输出字符串，输出字符的位置，输入字符串的长度
// 返回参数： 无
//==========================================================
void copy_string(char* ch_out, char *ch_in, int &i, int size) {
    for (int j = 0; j < size; j++) {
        *(ch_out + i) = ch_in[j];
        i++;
    }
}

int main() {
    char ch1[41] = {}, ch2[41] = {};
    int size1 = 0, size2 = 0;
    // 输入字符串
    cout << "请输入字符串1：";
    cin.getline(ch1, 41);
    cout << "请输入字符串2：";
    cin.getline(ch2, 41);
    // 获取字符串长度
    size1 = string_size(ch1);
    cout << "字符串1长度：" << size1 << endl;
    size2 = string_size(ch2);
    cout << "字符串2长度：" << size2 << endl;
    //连接字符串
    char* ch_out = nullptr;
    int i = 0;
    ch_out = new char[size1 + size2 + 1](); // 申请内存
    if (ch_out == nullptr) {
        cout << "内存申请失败" << endl;
        return 0;
    }
    copy_string(ch_out, ch1, i, size1);
    copy_string(ch_out, ch2, i, size2);
    *(ch_out + i) = '\0'; // 字符串结束符
    cout << "连接结果：" << ch_out << endl;

    return 0;
}