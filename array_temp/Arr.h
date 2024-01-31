template<typename T>
class sArr
{
private:
  int cap;
  int nrOfEl;
  T *arr;

public:
  sArr(int size = 5);
  ~sArr();
  int size()const;
  void add(const T &obj);
  T& get(int index);
};

template<typename T>
sArr<T>::sArr(int size = 5)
{
  this->cap = size;
  this->nrOfEl = 0;
  this->arr = new T[this->cap];
}

template<typename T>
sArr<T>::~sArr()
{
 delete[] this->arr;
}

template<typename T>
int sArr<T>::size()const
{
  return this->nrOfEl;
}

template<typename T>
void sArr<T>::add(const T &obj)
{
  if (this->nrOfEl < this->cap)
    this->arr[this->nrOfEl++] = obj;
  else
     Serial.println("Array is full");
}

template<typename T>
T& sArr<T>::get(int index)
{
  if (index < 0 || index >= this->nrOfEl)
   Serial.println("Bad index!");

  return this->arr[index];
}
