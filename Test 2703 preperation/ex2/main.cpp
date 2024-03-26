
#include <iostream>

template<typename T>
class Array{
    private:
    T* elem;
    int size;
    int capcaity;

    void copy(const Array& a)
    {
        delete[] this->elem;
        elem = new T[a.capcaity];
        for(int i =0 ; i< a.size;i++){
            elem[i] = a[i];
        }   
        this->capacity = a.capacity;
        this->size = a.size;
    }
    public:
    Array(): size (0), capcacity(10){
        elem = new T[0];
    }
    ~Array(){
        delete[] elem;
    }
    Array(const Array& a)
    {
        if(this != &a){
            copy(a);
        }
    }

    T* operator[](unsigned int i){
        if(i>size ){
            return nullptr;
        }
        return &this->elem[i];
    }




};




int main(){




    return 0;
}