void insertion(int arr[], int n_arr[], int size, int x, int p){

for(int i=0; i <= size; i++){

if(i==p){

    n_arr[i]=x;

  }

if(i<p){

    n_arr[i]=arr[i];

  }

if(i>p){

    n_arr[i]=arr[i-1];

  }

 }

}

