#include<iostream>
#include<windows.h>
 using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout<<"Tasks to do: "<<endl;
    cout<<"---------------------------"<<endl;
    for(int i=0; i<task_count; i++)
    {
        cout<<"task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"--------------------------"<<endl;
}

 int main()
 {
    system("color a");
    string tasks[10] = {""};
    //counter var -> know how many tasks we have
    int task_count = 0;

    int option = -1;
    while(option != 0)
    {
        //we will make menu here
        cout<<"--- To Do List ---"<<endl;
        cout<<"1 - To Add New tasks"<<endl;
        cout<<"2 - To View tasks"<<endl;
        cout<<"3 - Delete teh tasks "<<endl;
        cout<<"0 - Terminate the program"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            {
             if(task_count >9)
             {
                cout<<"```TASK LIST IS FULL ```"<<endl;
             }   
             else{
                cout<<"Enetr A new task: ";
                cin.ignore();
                getline(cin, tasks[task_count]);
                task_count++;
             }
             break;
            }
            case 2:
            system("cls");
            print_tasks(tasks,task_count);
            break;
            case 3:
            {
                system("cls");
                print_tasks(tasks,task_count);
                int del_task = 0;
                cout<<"Enetr A task to delete: ";
                cin>>del_task;

                if(del_task<0 || del_task >9)
                {
                    cout<<"You entered invalid task no.,"<<endl;
                    break;
                }
                for(int i=del_task; i<task_count; i++)
                {
                    tasks[i] = tasks[i+1];
                }
                task_count = task_count - 1;
                break;
            }
            case 0:
            cout<<"Terminating the program -   ---   ------------"<<endl;
            break;
            default:
            cout<<"You entered invalid value!"<<endl;
        }
        
    }
 }