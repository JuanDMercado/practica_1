#include <iostream>
using namespace std;

// ---------------- Ejercicio 3 ----------------
void ejercicio3() {
    int A, B;
    cin >> A >> B;
    if (A > B) cout << "El mayor es " << A << "\n";
    else       cout << "El mayor es " << B << "\n";
}

// ---------------- Ejercicio 5 ----------------
void ejercicio5() {
    int A, B;
    cin >> A >> B;
    int cociente = A / B;
    int resto = A % B;
    if ((2 * resto) >= B) cociente = cociente + 1;
    cout << A << "/" << B << "=" << cociente << "\n";
}

// ---------------- Ejercicio 7 ----------------
void ejercicio7() {
    int N; cin >> N;
    int suma = 0, i = 0;
    while (i <= N) { suma = suma + i; i = i + 1; }
    cout << "La sumatoria desde 0 hasta " << N << " es: " << suma << "\n";
}

// ---------------- Ejercicio 9 ----------------
void ejercicio9() {
    double N, pi = 3.1416;
    cin >> N;
    double per = 2 * pi * N;
    double area = pi * N * N;
    cout << "Perimetro: " << per << "\n";
    cout << "Area: " << area << "\n";
}

// ---------------- Ejercicio 11 ----------------
void ejercicio11() {
    int N; cin >> N;
    int i = 1;
    while (i <= 10) {
        cout << i << "x" << N << "=" << (i*N) << "\n";
        i = i + 1;
    }
}

// ---------------- Ejercicio 13 ----------------
void ejercicio13() {
    int N; cin >> N;
    cout << "Los divisores de n son:\n";
    int i = 1;
    while (i <= N) {
        if (N % i == 0) cout << i << "\n";
        i = i + 1;
    }
}

// ---------------- Ejercicio 15 ----------------
void ejercicio15() {
    int num, suma=0;
    cin >> num;
    while (num != 0) {
        suma = suma + num;
        cin >> num;
    }
    cout << "El resultado de la sumatoria es: " << suma << "\n";
}

// ---------------- Ejercicio 17 ----------------
void ejercicio17() {
    int num, mayor=-1000000;
    cin >> num;
    while (num != 0) {
        if (num > mayor) mayor = num;
        cin >> num;
    }
    cout << "El numero mayor fue: " << mayor << "\n";
}

// ---------------- Ejercicio 19 ----------------
void ejercicio19() {
    int N; cin >> N;
    bool primo=true;
    if (N < 2) primo=false;
    int i=2;
    while (i < N && primo) {
        if (N % i == 0) primo=false;
        i = i+1;
    }
    if (primo) cout << N << " es un numero primo.\n";
    else       cout << N << " NO es un numero primo.\n";
}

// ---------------- Ejercicio 21 ----------------
void ejercicio21() {
    char c; cin >> c;
    if (c >= 'a' && c <= 'z') { c = c-32; cout << "Letra convertida: " << c << "\n"; }
    else if (c >= 'A' && c <= 'Z') { c = c+32; cout << "Letra convertida: " << c << "\n"; }
    else cout << "No es letra.\n";
}

// ---------------- Ejercicio 23 ----------------
void ejercicio23() {
    int A,B; cin >> A >> B;
    int a=A, b=B;
    while (b != 0) { int t=b; b=a%b; a=t; }
    int mcd=a;
    int mcm=(A/mcd)*B;
    cout << "El MCM de " << A << " y " << B << " es: " << mcm << "\n";
}

// ---------------- Ejercicio 25 ----------------
void ejercicio25() {
    int N; cin >> N;
    int x=N; if (x<0) x=-x;
    if (x==0) { cout << "0 tiene 1 digitos.\n"; return; }
    int d=0;
    while (x>0) { x=x/10; d=d+1; }
    cout << N << " tiene " << d << " digitos.\n";
}

// ---------------- Ejercicio 27 ----------------
void ejercicio27() {
    int a,b; char op;
    cin >> a >> op >> b;
    if (op=='+') cout << a << "+" << b << "=" << (a+b) << "\n";
    else if (op=='-') cout << a << "-" << b << "=" << (a-b) << "\n";
    else if (op=='*') cout << a << "*" << b << "=" << (a*b) << "\n";
    else if (op=='/') {
        if (b!=0) cout << a << "/" << b << "=" << (a/b) << "\n";
        else cout << "Division por cero no permitida\n";
    }
}

// ---------------- Ejercicio 29 ----------------
void ejercicio29() {
    int lo=0, hi=100;
    while (lo<=hi) {
        int mid=(lo+hi)/2;
        cout << mid << "\n";
        char resp; cin >> resp;
        if (resp=='=') break;
        else if (resp=='>') lo=mid+1;
        else if (resp=='<') hi=mid-1;
    }
}

// ---------------- Problema 1 ----------------
void problema1() {
    char c; cin >> c;
    if (!((c>='a'&&c<='z')||(c>='A'&&c<='Z'))) {
        cout << "no es una letra.\n"; return;
    }
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        cout << c << " es una vocal.\n";
    else
        cout << c << " es una consonante.\n";
}

// ---------------- Problema 3 ----------------
void problema3() {
    int dia, mes; char s;
    cin >> dia >> s >> mes; // leer como 27/4
    int diasMes[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes<1 || mes>12) { cout << mes << " es un mes invalido.\n"; return; }
    if (dia<1) { cout << dia << "/" << mes << " es una fecha invalida.\n"; return; }
    if (mes==2 && dia==29) { cout << "29/2 es valida en bisiesto.\n"; return; }
    if (dia>diasMes[mes]) cout << dia << "/" << mes << " es una fecha invalida.\n";
    else cout << dia << "/" << mes << " es una fecha valida.\n";
}

// ---------------- Problema 5 ----------------
void problema5() {
    int N; cin >> N;
    for (int w=1; w<=N; w+=2) {
        for (int i=0;i<w;i++) cout<<"*";
        cout<<"\n";
    }
    for (int w=N-2; w>=1; w-=2) {
        for (int i=0;i<w;i++) cout<<"*";
        cout<<"\n";
    }
}

// ---------------- Problema 7 ----------------
void problema7() {
    int n; cin >> n;
    int a=1,b=1,suma=0;
    while (b<n) {
        if (b%2==0) suma=suma+b;
        int c=a+b; a=b; b=c;
    }
    cout << "El resultado de la suma es: " << suma << "\n";
}

// ---------------- Problema 9 ----------------
void problema9() {
    int N; cin >> N;
    if (N<0) N=-N;
    if (N==0) { cout << "El resultado de la suma es: 1\n"; return; }
    int suma=0;
    while (N>0) {
        int d=N%10;
        int pot=1, i=0;
        while (i<d) { pot=pot*d; i=i+1; }
        suma=suma+pot;
        N=N/10;
    }
    cout << "El resultado de la suma es: " << suma << "\n";
}

// ---------------- Problema 11 ----------------
void problema11() {
    int n; cin >> n;
    long long ans=1;
    for (int i=2;i<=n;i++) {
        // mcm(ans,i)
        long long a=ans,b=i;
        while (b!=0){ long long t=b; b=a%b; a=t; }
        long long mcd=a;
        ans=(ans/mcd)*i;
    }
    cout << "El minimo comun multiplo es: " << ans << "\n";
}

// ---------------- Problema 13 ----------------
bool esPrimoSimple(int n){
    if (n<2) return false;
    int i=2;
    while (i<n) { if (n%i==0) return false; i=i+1; }
    return true;
}
void problema13() {
    int n; cin >> n;
    int suma=0, i=2;
    while (i<n) {
        if (esPrimoSimple(i)) suma=suma+i;
        i=i+1;
    }
    cout << "El resultado de la suma es: " << suma << "\n";
}

// ---------------- Problema 15 ----------------
void problema15() {
    int n; cin >> n;
    long long suma=1;
    int k=1;
    while (k<=(n-1)/2) {
        suma=suma+(16LL*k*k + 4*k + 4);
        k=k+1;
    }
    cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma << "\n";
}

// ---------------- Problema 17 ----------------
int contarDivisores(int x){
    int cont=0,i=1;
    while (i<=x) { if (x%i==0) cont=cont+1; i=i+1; }
    return cont;
}
void problema17() {
    int k; cin >> k;
    int n=1;
    while (true) {
        int T=n*(n+1)/2;
        int d=contarDivisores(T);
        if (d>k) { cout << "El numero es: " << T << " que tiene " << d << " divisores.\n"; break; }
        n=n+1;
    }
}

// ---------------- MAIN ----------------
int main() {
    int opcion;
    cout << "Menu:\n";
    cout << "1=Ej3,2=Ej5,3=Ej7,4=Ej9,5=Ej11,6=Ej13,7=Ej15,8=Ej17,9=Ej19,10=Ej21,11=Ej23,12=Ej25,13=Ej27,14=Ej29\n";
    cout << "15=Prob1,16=Prob3,17=Prob5,18=Prob7,19=Prob9,20=Prob11,21=Prob13,22=Prob15,23=Prob17\n";
    cout << "Ingrese opcion: ";
    cin >> opcion;

    if (opcion==1) ejercicio3();
    else if (opcion==2) ejercicio5();
    else if (opcion==3) ejercicio7();
    else if (opcion==4) ejercicio9();
    else if (opcion==5) ejercicio11();
    else if (opcion==6) ejercicio13();
    else if (opcion==7) ejercicio15();
    else if (opcion==8) ejercicio17();
    else if (opcion==9) ejercicio19();
    else if (opcion==10) ejercicio21();
    else if (opcion==11) ejercicio23();
    else if (opcion==12) ejercicio25();
    else if (opcion==13) ejercicio27();
    else if (opcion==14) ejercicio29();
    else if (opcion==15) problema1();
    else if (opcion==16) problema3();
    else if (opcion==17) problema5();
    else if (opcion==18) problema7();
    else if (opcion==19) problema9();
    else if (opcion==20) problema11();
    else if (opcion==21) problema13();
    else if (opcion==22) problema15();
    else if (opcion==23) problema17();

    return 0;
}
