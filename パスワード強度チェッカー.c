#include <stdio.h>
#include<string.h>
#include <ctype.h>

int contains_uppercase(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) { 
            return 1; 
        }
    }
    return 0; 
}

int contains_lowercase(const char *str) {
    for (int j = 0; str[j] != '\0'; j++) {
        if (islower(str[j])) { 
            return 1; 
        }
    }
    return 0; 
}


int main(void)
{
    char pas[256];
    unsigned int len;
    int has_digit = 0;
    
    printf("パスワードを入力 >>>");
    fgets(pas, sizeof(pas), stdin);
    
    len = strlen(pas);
    for (int k=0; pas[k] != '\0'; k++) {
        if (isdigit((unsigned char)pas[k])) {
            has_digit = 1;
            break;
        }
    }
    
    
    if(len >= 9){ //長さが8文字以上か
        if(contains_uppercase(pas)){ //大文字があるか
            if(contains_lowercase(pas)){ //小文字があるか
                if (has_digit) { //数字が含まれているか
                    printf("このパスワードは強力です。\n");
                } else {
                    printf("数字を含めてください\n");
                }
            }else{
                printf("小文字を含めてください\n");
            }
        }else{
            printf("大文字を含めてください\n");
        }
    }else{
        printf("文字数を8文字以上にしてください\n");
    }
    
    return 0;
 
}

