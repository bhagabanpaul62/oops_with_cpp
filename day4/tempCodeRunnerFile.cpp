  Counter operator++(int){//post
            Counter temp=*this;
            count++;
            return temp;

        }
        Counter operator--(int){//post
            Counter temp=*this;
            count--;
            return temp;

        }