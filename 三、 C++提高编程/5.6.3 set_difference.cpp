//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////常用集合算法 set_difference
//class MyPrint
//{
//public:
//    void operator()(const int& val)const
//    {
//        cout << val << " ";
//    }
//};
//
//void test01()
//{
//    vector<int>v1, v2, vTarget;
//    for (int i = 0; i < 10; ++i)
//        v1.push_back(i), v2.push_back(i + 5);
//
//    vTarget.resize(max(v1.size(), v2.size()));
//    cout << "v1和2的差集为?" << endl;
//    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//    for_each(vTarget.begin(), itEnd, MyPrint());
//    cout << endl;
//
//    cout << "v2和1的差集为?" << endl;
//    itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//    for_each(vTarget.begin(), itEnd, MyPrint());
//    cout << endl;
//}
//
//int main(){
//
//    test01();
//
//    //总结：
//    //求差集的两个集合必须是有序序列
//    //目标容器开辟空间需要从两个容器中取较大值
//    //set_difference返回值即是差集中最后一个元素的位置
//
//    system("pause");
//    return EXIT_SUCCESS;
//}
