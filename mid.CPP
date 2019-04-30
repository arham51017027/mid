#include <iostream.h>          f
#include <conio.h>
#include <stdio.h>

    int main()
    {
    char nama[30],grade;
    int nt1, nt2, nt3, stbk, nlfnl, nlmid, na, tnt;
    cout<<endl<<endl;
    cout<<"\~~~~~~program hitung nilai akhir ~~~~"<<endl<<endl;
    cout<<"\t masukan nama siswa: ";gets(nama);
    cout<<"\ttmasukan nim  :";cin>>stbk;
    cout<<"\tmasukan nilai tugas 1 :";cin>>nt1;
    cout<<"\tmasukan nilai tugas 2 :";cin>>nt2;
    cout<<"\tmasukan nilai tugas 3 : ";cin>>nt3;
    cout<<"\tnilai mid   : ";cin>>nlmid;
    cout<<"\tnilai final :";cin>>nlfnl;
    tnt = (nt1 + nt2 + nt3)/3;
    na = (0.2*tnt)+(0.4*nlmid)+(0.4*nlfnl);
    if(na>=80)
    {
    grade='a';
    }
    else if(na>=70)
    {
    grade='b';
    }
    else if(na>=60)
    {
    grade='c';
    }
    else if(na>=50)
    {
    grade='d';
    }
    else
    {
    grade='e';
    }
    cout<<endl<<endl;
    cout<<"\t~~~~~hasil nilai akhir mahasiswa~~~~~~~~ "<<endl<<endl;
    cout<<"\tnama : "<<nama<<endl;
    cout<<"\tnim  : "<<stbk<<endl;
    cout<<"\tnilai akhir :"<<na<<endl;
    cout<<"\tgrade : "<<grade<<endl;
    getch();
    return 0;
    }




