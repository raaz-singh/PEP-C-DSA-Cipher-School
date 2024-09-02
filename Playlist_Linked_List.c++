#include<iostream>
#include<string>
using namespace std;

class song{
public:
    int duration;
    string title;
    string artist;

    song *next;
    song(int duration, string title, string artist){
        this->duration = duration;
        this->artist = artist;
        this->title = title;
        this->next = NULL;
    }
};

song *head = nullptr, *tail = nullptr;

void addFirst(int duration, string title, string artist){
    song *newnode = new song(duration, title, artist);
    if (head == nullptr)
    {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void display(){
    song *temp = head;
    while (temp != nullptr)
    {
        cout << temp->title << " " << temp->artist << " " << temp->duration << endl;
        temp = temp->next;
    }
}

void removeSong(const string& title){
    song* temp = head;
    song* prev = nullptr;

    while(temp != nullptr && temp->title != title){
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Song not found" << endl;
        return;
    }
    if (prev == nullptr)
    {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }
    delete temp;
}

int main(){
    addFirst(3, "Millionare", "Honey singh");
    addFirst(2, "Dope sope", "Honey singh");
    display();
    removeSong("Dope sope");
    display();
    return 0;
}