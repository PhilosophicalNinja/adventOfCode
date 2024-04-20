#include <stdio.h>
#include <stdlib.h>

int lengthNull(char input[]){
    int i = 0;
    while(input[i] != '\0'){
        i++;
    }
    return i;
}

struct STRING{
    int length;
    char* val;
};

struct STRING create(char input[]){
    struct STRING temp;
    temp.val = (char*)malloc(sizeof(char) * (lengthNull(input) + 1));
    for(int i = 0; input[i] != '\0'; i++){
        temp.val[i] = input[i];
    }
    temp.length = lengthNull(input);
    temp.val[temp.length] = '\0';
    return temp;
}

void append(struct STRING base, char addition[]){

}

void concatenate(struct STRING base, struct STRING addition){
    char* hold = (char*)malloc(base.length);
    for(int i = 0; base.val[i] != '\0'; i++){
        hold[i] = base.val[i];
    }
    base.val = (char*)realloc(base.val, (base.length + addition.length + 1) * sizeof(char));
    for(int i = 0; i < base.length; i++){
        base.val[i] = hold[i];
    }
    //Add second part
}

int main(int argc, char* argv[]){
    struct STRING fish = create("goldfish");
    struct STRING test = create("nuke");
    concatenate(fish, test);
    printf("%s\n", fish.val);
    return 0;
}