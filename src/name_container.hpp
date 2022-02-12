#include <vector>
#include <string>

namespace ipb{
    template <typename T>
    class named_vector{
        private:
            int capacity_;
            int size_;
            T* first_;
            T* last_;
            int name_;
            T data_[];
        public:
            named_vector(){
                data_ = (T []) {};
                capacity_ = 0;
                size_ = 0;
                first_ = nullptr;
                last_ = nullptr;
            }
            named_vector(T data []){
                data_ = data;
                size_ = sizeof(data)/sizeof(T);
                capacity_ = 0;
            }
            void resize(int n){
                T* tmp = first_;
                first_ = new T [n];
                for(int i = 0; i < size_; i++){
                    *(first_ + i) = *(tmp + i);
                }
                capacity_ = n;
                delete tmp;
            }
            int size(){
                return size_;
            }
            void reserve(int n){
                T data_ref [n];
                data_ = std::move(data_ref);
                capacity_ = n;
            }
            int capacity(){
                return capacity_;
            }
            void pushback(T& value){
                if(capacity_ < size_){
                    data_[*last_ + 1] = value;
                    size_++;
                }
                else if(capacity_ == size_){
                    resize(size_ + 1);
                    data_[*last_ + 1] = value;
                    size_++;
                }
            }
            void popback(){
                if(!first_){
                    size_--;
                    last_ = &data_[size_];
                }
            }
            std::string name(){
                return name_;
            }
            T &at (int index) const {
                return data_[index];
            }
            T* vector(){
                return data_;
            }
    };

}// namespace ipb