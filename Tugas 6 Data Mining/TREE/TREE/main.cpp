#include "pustaka.h"

int main()
{
    BinTree T = Nil;
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;

    InsertNode(&T, 45);
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;


    InsertNode(&T, 15);
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;


    InsertNode(&T, 59);
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;

    InsertNode(&T, 50);
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;

    InsertNode(&T, 57);
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;

    InsertNode(&T, 75);
    cout << "apakah TreeEmpty ? : " << TreeEmpty(T) << endl;
    cout << "apakah isOneElement ? : " << isOneElement(T) << endl;
    cout << "apakah isunerLeft ? : " << isUnerLeft(T) << endl;
    cout << "apakah isunerRight ? : " << isUnerRight(T) << endl;
    cout << "apakah isBiner ? : " << isBiner(T) << endl;
    cout << "======================================" << endl;
    
    cout << "PrintInOrder : ";PrintInOrder(T);
    cout << endl;
    cout << "PrintPreOrder : ";PrintPreOrder(T);
    cout << endl;
    cout << "PrintPostOrder : ";PrintPostOrder(T);
    cout << endl;
    cout << "jumlah elemen : " << NbEl(T) << endl;
    cout << "jumlah daun : " << NbDaun(T) << endl;
    cout << "jumlah Biner : " << NbBiner(T) << endl;

    return 0;
}