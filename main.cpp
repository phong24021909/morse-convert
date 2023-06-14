#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// TEXT TO MORSE...........
void convertToMose(){

  char str[256],str1[1000];

  FILE * f1 = NULL;
  f1 = fopen("inputt.txt", "r");
  fgets(str, 256, f1);

  int j=0;
  for(int i=0;i<=strlen(str);i++){
    switch(toupper(str[i])){
      case 'A':
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'B':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
      break;

      case 'C':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
      break;

      case 'D':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
      break;

      case 'E':
        str1[j++]='.';
        str1[j]=' ';
      break;

      case 'F':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'G':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
      break;

      case 'H':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'I':
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'J':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'K':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'L':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
      break;

      case 'M':
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'N':
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'O':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'P':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'Q':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'R':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'S':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case 'T':
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'U':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'V':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'W':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'X':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'y':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case 'Z':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '0':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case '1':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case '2':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case '3':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case '4':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case '5':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '6':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '7':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '8':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '9':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '.':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case ',':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case ':':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '?':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]=' ';
        break;


      case '-':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]=' ';
        break;

      case '"':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '+':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

      case '/':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;

       case '@':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]=' ';
        break;


      case ' ':
        str1[j++]='/';
        str1[j]=' ';
        break;
      
      case '!':
        str1[j++]='#';
        str1[j]=' ';
        break;
      
      case ';':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '$':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '%':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '<':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '>':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '&':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '^':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '~':
        str1[j++]='#';
        str1[j]=' ';
        break;

      case '`':
        str1[j++]='#';
        str1[j]=' ';
        break;
      case '\n':
        str1[j]='\n';
        break;
      

    }
    j++;
  }
  cout <<"\n";
  str1[j-1]='\0';
  fclose(f1);

  FILE *file;
  char x;
  if (file = fopen("outputt.txt", "r")) {
    cout << "FILE EXISTED\n";
    cout << "DO YOU WANT TO RECEIVE NO?\n";
    cout << "y = yes || n = no\n";
    cin >> x;
    if(x == 'n'){
      fclose(file);
    }
    else {
      FILE * f2 = NULL;
      FILE * f3 = NULL;
    f2 = fopen("outputt.txt", "w+");
    f3 = fopen("diary.txt", "a+");        
    fputs(str1, f2);
    fprintf(f3,"%s\n",str1);
    fclose(f2);
    fclose(f3);
    }
  } 
  else {
    FILE * f2 = NULL;
    FILE * f3 = NULL;
    f2 = fopen("outputt.txt", "w+");
    f3 = fopen("diary.txt", "a+");         
    fputs(str1, f2);
    fprintf(f3,"%s\n",str1);
    fclose(f2);
    fclose(f3);
  }
}

// MORSE TO TEXT.........
string convertToEnglish(string morse, string const morseCode[]);

string convertToEnglish(string morse, string const morseCode[])
{
    string output = "";
    string currentLetter = "";
    istringstream ss(morse);
    
    size_t const characters = 68;
    
    while(ss >> currentLetter)
    {
        size_t index = 0;
        while(currentLetter != morseCode[index] && index < characters)
        {
            ++index;
        }
        
        output += ' ' + index;
    }
    
    return output;
}
void trans(){

    char input[100];    
    FILE * f3 = NULL;
    f3 = fopen("inputm.txt", "r+");
    fgets(input, 256, f3);
    
    string const morseCode[] = {"/", "!", ".-..-.", "#", "$", "%", "&", ".----.",
    "-.--.", "-.--.-", "-..-", ".-.-.", "--..--", "-....-", ".-.-.-", "-··-·", "-----", 
    ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", 
    "---...", ";", "<", "-···-", ">",  "..--..", ".--.-.", ".-", "-...", "-.-.", "-..", ".", "..-.",
    "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
    ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    fclose(f3);
    ifstream ifile;
    char x;
   ifile.open("outputm.txt");
   if(ifile) {
    cout << "FILE EXISTED\n";
    cout << "DO YOU WANT TO RECEIVE NO?\n";
    cout << "y = yes || n = no\n";
    cin >> x;
    if(x == 'n'){
      ifile.close();
    }
    else {
      fstream f4, f5;
      f4.open("outputm.txt", ios::out);
      f5.open("diary.txt",ios::in | ios::out | ios::app);
      f4 << convertToEnglish(input, morseCode);
      f5 << convertToEnglish(input, morseCode) << endl;
      f4.close();
      f5.close();
    }
   }
   else {
    fstream f4, f5;
    f4.open("outputm.txt", ios::out);
    f5.open("diary.txt",ios::in | ios::out | ios::app);
    f4 << convertToEnglish(input, morseCode);
    f5 << convertToEnglish(input, morseCode) << endl;
    f4.close();
    f5.close();
   }
}
void file_slovet(){
  ifstream f1;
  char c;
  int numchar, numwords;
  f1.open("inputt.txt");
  numchar = 0;
  numwords = 0;
  f1.get(c);
  while(f1){
    while (f1 && c != ' ') {
      numchar = numchar + 1;
      f1.get(c);
    }
    numwords = numwords + 1;
    f1.get(c);
  }
  
  int wconvert, numconvert, errwword, errchar;
  wconvert = numwords;
  numconvert = numchar;
  errwword = numwords - wconvert;
  errchar = numchar - numconvert;
  cout << "\nNumber of words in input file: " << numwords;
  cout << "\ntotal number of characters: " << numchar;
  cout << "\nWord converted: " << wconvert;
  cout << "\nNumber of characters converted: " << numconvert;
  cout << "\nError word: " << errwword;
  cout << "\nNumber of characters NOT converted: " << errchar;
  fstream fc;
  fc.open("diary.txt",ios::in | ios::out | ios::app);
  fc << "\nNumber of words in input file: " << numwords;
  fc << "\ntotal number of characters: " << numchar;
  fc << "\nWord converted: " << wconvert;
  fc << "\nNumber of characters converted: " << numconvert;
  fc << "\nError word: " << errwword;
  fc << "\nNumber of characters NOT converted: " << errchar;
  fc.close();
  f1.close();
  
}

void checkErrChar(){
  ifstream f1;
  char c;
  int numchar, numwords;
  f1.open("inputt.txt");
  int dem = 0;
  char d;
  f1.get(d);
    while(f1){
      if(f1 && (d == '!' || d == '#' || d == '$' || d == '%' || d == '&' || d == '<' || d == '>')){
        dem += 1;
        f1.get(d);       
      }
      f1.get(d);
    }
  if(dem >= 1){
    fstream fc;
    fc.open("diary.txt",ios::in | ios::out | ios::app);
    fc << "ERROR AB \n";
    fc << "The number of characters in error : " << dem;
    fc.close();
    cout << "ERROR AB \n";
    cout << "The number of characters in error : " << dem;
    cout << endl;
  }
  f1.close();
}

void file_slovem(){
  ifstream f1;
  char c;
  int numchar, numwords;
  f1.open("inputm.txt");
  numchar = 0;
  numwords = 0;
  f1.get(c);
  while(f1){
    while (f1 && c != '/') {
      numchar = numchar + 1;
      f1.get(c);
    }
    numwords = numwords + 1;
    f1.get(c);
  }
  int wconvert, numconvert, errwword, errchar;
  wconvert = numwords;
  numconvert = numchar;
  errwword = numwords - wconvert;
  errchar = numchar - numconvert;
  cout << "\nNumber of words in input file: " << numwords;
  cout << "\ntotal number of characters: " << numchar;
  cout << "\nWord converted: " << wconvert;
  cout << "\nNumber of characters converted: " << numconvert;
  cout << "\nError word: " << errwword;
  cout << "\nNumber of characters NOT converted: " << errchar;
  fstream fc;
  fc.open("diary.txt",ios::in | ios::out | ios::app);
  fc << "\nNumber of words in input file: " << numwords;
  fc << "\ntotal number of characters: " << numchar;
  fc << "\nWord converted: " << wconvert;
  fc << "\nNumber of characters converted: " << numconvert;
  fc << "\nError word: " << errwword;
  fc << "\nNumber of characters NOT converted: " << errchar;
  fc.close();
  f1.close();
}

int main(){

  try{
    bool flag = true;
    while(flag){
    
      string inputstr;
      string s1 = "-t";
      string s2 = "-m";
      string s3 = "-c";
      string s4 = "-h";
      cout << "Please enter your choice -t or -m or -c or -h: ";    
      cin >> inputstr;

      if(inputstr == s1 || inputstr == s2 || inputstr == s3 || inputstr == s4){

      if(inputstr == s1){
        ifstream ifile1;
        ifile1.open("inputt.txt");
        if(!ifile1){
          fstream fc;
          fc.open("diary.txt",ios::in | ios::out | ios::app);
          fc << "ERROR FILE inputt.txt khong tim thay" << endl;
          fc.close();
          cout << "ERROR FILE inputt.txt khong tim thay";
          
          flag = false;
        }
        ifile1.close();
        convertToMose();
        checkErrChar();
        cout << "C:/ trans txt/ morse \n ";
      }
      else if(inputstr == s2){
        ifstream ifile2;
        ifile2.open("inputm.txt");
        if(!ifile2){
          fstream fc;
          fc.open("diary.txt",ios::in | ios::out | ios::app);
          fc << "ERROR FILE inputm.txt khong tim thay" << endl;
          fc.close();
          cout << "ERROR FILE inputm.txt khong tim thay";
        }
        ifile2.close();
        trans();
        cout << "C:/ trans morse/ morse \n";
      }
      else if(inputstr == s3){
        cout << "Please enter your choice -t or -m: \n";
      
        cin >> inputstr;
        if(inputstr == s1){

          ifstream ifile1;
          ifile1.open("inputt.txt");
          if(!ifile1){
            fstream fc;
            fc.open("diary.txt",ios::in | ios::out | ios::app);
            fc << "ERROR FILE inputt.txt khong tim thay" << endl;
            fc.close();
            cout << "ERROR FILE inputt.txt khong tim thay";
            flag = false;
          }
          ifile1.close();

          clock_t start, end;
          double time_use;
          start = clock();
          convertToMose();
          checkErrChar();
          cout << "C:/ trans txt/ morse \n ";
          end = clock();
          time_use = (double)(end - start) / CLOCKS_PER_SEC;
          fstream fc;
          fc.open("diary.txt",ios::in | ios::out | ios::app);
          fc << "Time[second]: " << time_use << end;
          fc.close();
          cout << "Time[second]: " << time_use << end;
          file_slovet();
        }
        else if(inputstr == s2){

          ifstream ifile2;
          ifile2.open("inputm.txt");
          if(!ifile2){
            fstream fc;
            fc.open("diary.txt",ios::in | ios::out | ios::app);
            fc << "ERROR FILE inputm.txt khong tim thay" << endl;
            fc.close();
            cout << "ERROR FILE inputm.txt khong tim thay";
          }
          
          ifile2.close();
          clock_t start, end;
          double time_use;
          start = clock();
          trans();
          cout << "C:/ trans morse/ morse \n";
          end = clock();
          time_use = (double)(end - start) / CLOCKS_PER_SEC;
          fstream fc;
          fc.open("diary.txt",ios::in | ios::out | ios::app);
          fc << "Time[second]: " << time_use << end;
          fc.close();
          cout << "Time[second]: " << time_use << end;
          file_slovem();
        }
      }
      else if(inputstr == s4){
        cout << "Open file README.txt to help......";
        fstream fhe;
        fhe.open("README.txt", ios::in);
      }
      time_t now = time(0);
      tm *ltm = localtime(&now);
      cout << "\nTime Complete: " ;
      cout << 1900 + ltm->tm_year << "-";
      cout << 1 + ltm->tm_mon<< "/";
      cout << ltm->tm_mday << "  ";
      cout << ltm->tm_hour << ":";
      cout << ltm->tm_min << ":";
      cout << ltm->tm_sec << endl;
      fstream fc;
      fc.open("diary.txt",ios::in | ios::out | ios::app);
      fc << "\nTime Complete: " ;
      fc << 1900 + ltm->tm_year << "-";
      fc << 1 + ltm->tm_mon<< "/";
      fc << ltm->tm_mday << "  ";
      fc << ltm->tm_hour << ":";
      fc << ltm->tm_min << ":";
      fc << ltm->tm_sec << endl;
      fc.close();
      char pick;
      cout << "Do you want to continue??" << endl;
      cout << "enter y to continue || n to exit" << endl;
      cin >> pick;
      if(pick == 'n')
        flag = false;
  
      }
      else{
        fstream fc;
        fc.open("diary.txt",ios::in | ios::out | ios::app);
        fc << "ERROR XX......";
        fc.close();
        cout << "ERROR XX......";
        cout << "\n choie 'morse -h' to help: \n";
        string inputx;
        cin >> inputx;
        string s5 = "morse –h";
        if(inputx == s5){
        
          fstream fh;
          fh.open("README.txt", ios::in);
        }
        fstream fd;
        fd.open("diary.txt",ios::in | ios::out | ios::app);
        fd << "Open file README.txt to help......\n";
        fd.close();
        cout << "Open file README.txt to help......";
        flag = false;
      }
    
    }
  }
  catch(string strerr){
    cout << "ERRORERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    fstream fc;
    fc.open("diary.txt",ios::in | ios::out | ios::app);
    fc << "ERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
  }
  return 0;
}
