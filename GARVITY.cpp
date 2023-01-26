#include<iostream>
#include<string.h>
#define nameof(xx) #xx
class Planet{
    public:
    char name[20];
    long location[2];
    long velocity[2];
    long mass;
    static Planet*create(char*name,long x,long y,long vx,long vy,long m){
        Planet self;
        strcpy(name,self.name);
        self.location[0]=x;self.location[1]=y;
        self.velocity[0]=vx;self.velocity[1]=vy;
        self.mass=m;
        return &self;
    }
};
int main(){
    char command[100];
    while(1){
        printf(">>>");
        scanf("%s",command);
        if(command=="create"){
            char name[20]={0};
            long location[2]={0,0};
            long velocity[2]={0,0};
            long mass;
            printf("name:");scanf("%s",name);
            printf("location:");scanf("%l,%l",location,&location[1]);
            printf("velocity:");scanf("%l,%l",velocity,&velocity[1]);
            printf("mass:");scanf("%l",&mass);
            Planet*planetCreateYet=Planet::create(name,location[0],location[1],velocity[0],velocity[1],mass);
        }
        else continue;
    }
}
