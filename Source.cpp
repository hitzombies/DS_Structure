#include "Statistic.h"

// -----------------------------------
//              主程序
// -----------------------------------

// -----------------------------------
// 菜单函数
// 负责人: 梁洪源 曾时铸
// -----------------------------------
void msg(void)
{
    cout
        << "1. 导入已有竞价表"
        << "2. 生成新竞价表"
        << "3. 保存当前竞价表"
        << "4. 排序竞价表"
        << "5. 插入一条竞价信息"
        << "6. 删除一条竞价信息"
        << "7. 设定备货量(中标人数)"
        << "8. 输出中标者"
        << "9. 销毁竞价表"
        << "0. 退出"
        << "--------------------"
        << "当前最高出价者:" // << *最高出价的竞价序列号
        << "当前最高出价:"   // << *最高出价
        << "--------------------"
        << endl;
}
// -----------------------------------

// -----------------------------------
// 功能选择函数
// -----------------------------------
void chooseFuction(void)
{
    int choose;
    do
    {
        msg();
        cout << "\n输入所选功能的序号: ";
        cin >> choose;

        switch (choose)
        {
        case 1:

            break;

        case 0:
            exit(1);
        }
    } while (choose != 0);
}

// -----------------------------------
// 主函数
// -----------------------------------
int main(int argc, char const *argv[])
{
    SqList L;
    InitList_Sq(L);
    chooseFuction();
    return 0;
}
