#include<iostream>
#include<vector>

using namespace std;
static int tasksCount=0;
struct Task{
    string taskDescription;
    bool completed;
};

class todo_list{
    private:
        vector<Task> tasks;
        
    public:
        void addTask(string taskDescription){
            tasks.push_back({taskDescription,false});
            tasksCount = tasksCount+1;
        }
        
        void displayTasks(){
            if(tasksCount==0){
                cout<<"\nNo tasks to display!!"<<endl;
                cout<<"please add tasks to display them"<<endl;
            }
            else{
                cout<<"\nThe tasks are :"<<endl;
                for(int i=0;i<tasks.size();i++){
                    cout<<i+1<<".";
                    if(tasks[i].completed) cout<<"Completed"<<endl;
                    else cout<<"Pending"<<endl;
                    cout<<tasks[i].taskDescription<<endl;
                    cout<<"\n"<<endl;
                }
            }    
        }
        
        void markCompleted(int index){
                if(index>0 && index<=tasks.size()){
                    tasks[index-1].completed = true;
                }
                else cout<<"Task index is wrong!!!"<<endl;
        }
        
        void removeTask(int index){
            if(index>0 && index<=tasks.size()){
                tasks.erase(tasks.begin() + index-1);
                cout<<"\nTask removed.\n";
            } 
            else cout<<"\nTask index is wrong!!!"<<endl;
        }
};

int main(){
    todo_list ToDo_obj;
    int choice;
    do{
        cout<<"\n1.Add Task\n";
        cout<<"2.Display Tasks\n";
        cout<<"3.Mark Completed\n";
        cout<<"4.Remove Task\n";
        cout<<"5.Exit\n";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:{
                string description;
                cout<<"\nEnter task description: ";
                cin.ignore();
                getline(cin,description);
                ToDo_obj.addTask(description);
                break;
            }
            
            case 2:{
                ToDo_obj.displayTasks();
                break;
            }    
                
            case 3:{
                int index;
                cout<<"\nEnter task index to mark as completed: ";
                cin >> index;
                ToDo_obj.markCompleted(index);
                break;
            }
            
            case 4:{
                int index;
                cout<<"\nEnter task index to remove: ";
                cin>>index;
                ToDo_obj.removeTask(index);
                break;
            }
            
            case 5:
                cout<<"\nExiting program.\n";
                break;
                
            default:
                cout<<"\nInvalid choice.Please try again"<<endl;
        }
    }while(choice!=5);    
    return 0;
}