#include <stdio.h>
#include <iostream>
using namespace std;
#define Nil NULL
typedef int infotype;
typedef struct Node *address;
typedef struct Node
{
    infotype Info;
    address Left;
    address Right;
};

typedef address BinTree;
BinTree Alokasi(infotype X);
void Dealokasi(BinTree *P);
BinTree Tree(infotype Akar, BinTree L, BinTree R);
bool TreeEmpty(BinTree P);
void InsertNode(BinTree *T, infotype X);
void PrintInOrder(BinTree T);
void PrintPreOrder(BinTree P);
void PrintPostOrder(BinTree P);
bool isOneElement(BinTree P);
int NbEl(BinTree P);
bool isUnerLeft(BinTree P);
bool isUnerRight(BinTree P);
bool isBiner(BinTree P);
int NbEl(BinTree P);
int NbDaun(BinTree P);
int NbBiner(BinTree P);
// definisi selector
#define Info(P) (P)->Info
#define Left(P) (P)->Left
#define Right(P) (P)->Right

bool TreeEmpty(BinTree T)
{
    return T == Nil;
}
BinTree Alokasi(infotype X)
{
    BinTree baru;

    baru = (BinTree)malloc(sizeof(Node));
    if (baru != Nil)
    {
        Info(baru) = X;
        Left(baru) = Nil;
        Right(baru) = Nil;
    }
    return baru;
}

BinTree Tree(infotype Akar, BinTree L, BinTree R)
{
    BinTree P;

    P = Alokasi(Akar);
    if (P != Nil)
    {
        Left(P) = L;
        Right(P) = R;
    }
    return P;
}

void InsertNode(BinTree *T, infotype X)
{
    BinTree P = (*T); // mirip address baru --> fungsi nya buat pivot/akar biar ga ilang
    if (TreeEmpty(P))
    { // kosong
        (*T) = Alokasi(X);
    }
    else
    { // isi
        // cout<< "info P : "<< Info(P) << endl;
        if (X <= Info(P))
        {
            InsertNode(&(Left(P)), X);
        }
        else
        {
            InsertNode(&(Right(P)), X);
        }
    }
}

// print urut
void PrintInOrder(BinTree P)
{
    if (TreeEmpty(P))
        return;
    else
    {
        PrintInOrder(Left(P));
        cout << " " << Info(P);
        PrintInOrder(Right(P));
    }
}

// print PreOrder
void PrintPreOrder(BinTree P)
{
    if (TreeEmpty(P))
        return;
    else
    {
        cout << " " << Info(P);
        PrintPreOrder(Left(P));
        PrintPreOrder(Right(P));
    }
}
void PrintPostOrder(BinTree P)
{
    if (TreeEmpty(P))
        return;
    else
    {
        PrintPostOrder(Left(P));
        PrintPostOrder(Right(P));
        cout << " " << Info(P);
    }
}

// tidak punya anak
bool isOneElement(BinTree P)
{
    return (!TreeEmpty(P) && Left(P) == Nil && Right(P) == Nil);
}
// punya anak di kiri doang
bool isUnerLeft(BinTree P)
{
    return (!TreeEmpty(P) && Left(P) != Nil && Right(P) == Nil);
}
// punya anak di kanan doang
bool isUnerRight(BinTree P)
{
    return (!TreeEmpty(P) && Left(P) == Nil && Right(P) != Nil);
}
// punya anak kanan dan kiri
bool isBiner(BinTree P)
{
    return (!TreeEmpty(P) && Left(P) != Nil && Right(P) != Nil);
}
int NbEl(BinTree P)
{
    if (TreeEmpty(P))
    {
        return 0;
    }
    else
    {
        return (1 + NbEl(Left(P)) + NbEl(Right(P)));
    }
}
int NbDaun(BinTree P)
{ // kalau gapunya left & right
    if (isOneElement(P))
    {
        return 1;
    }
    else
    {
        if (isUnerLeft(P))
        {
            return NbDaun(Left(P));
        }
        else if (isUnerRight(P))
        {
            return NbDaun(Right(P));
        }
        else
        {
            return NbDaun(Left(P)) + NbDaun(Right(P));
        }
    }
}

int NbBiner(BinTree P)
{
    // if (isUnerLeft(P))
    // {
    //     cout << "1" << endl;
    //     return NbBiner(Left(P));
    // }
    // else if (isUnerRight(P))
    // {
    //     cout << "2" << endl;
    //     return NbBiner(Right(P));
    // }
    // else if (isUnerRight(P) && isUnerRight(P))
    // {
    //     cout << "3" << endl;
    //     return 1;
    // }
    // else
    // {
    //     cout << "4" << endl;
    //     return NbBiner(P);
    // }
}
