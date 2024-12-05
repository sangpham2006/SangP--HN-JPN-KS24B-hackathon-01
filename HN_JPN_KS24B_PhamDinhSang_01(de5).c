#include <stdio.h>
int main(){
	int a[100], n, choice, sum = 0;
	while (choice != 11){
	
	printf("1. Nhap so phan tu va gia tri cho mang\n");
	printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5...)\n");
	printf("3. Dem so luong cac so hoan hao co trong mang\n");
	printf("4. Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n");
	printf("5. Them mot phan tu vao vi tri dau tien trong mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
	printf("6. Xoa phan tu tai mot vi tri cu the\n");
	printf("7. Sap xep mang theo thu tu giam dan (Selection sort)\n");
	printf("8. Tim kiem phan tu trong mang phan tu tim kiem do nguoi dùng nhap vào. Su dung thuat toan Binary search\n");
	printf("9. Sap xep lai mang và hien thi ra toàn bo phan tu co trong mang sao cho toàn bo so le dung truoc, so chan dung sau	\n");
	printf("10. Dao nguoc thu tu cua cac phan tu co trong mang và hien thi ra toàn bo phan tu co trong mang theo dang \n");
	printf("11. Thoat chuong trinh\n");
	printf("Moi ban chon\n \n");
	scanf("%d",&choice);
		switch(choice){
			case 1: 
				printf("Nhap vao so cac phan tu\n");
				scanf("%d",&n);
				for(int i = 0; i<n; i++){
					printf("Nhap vao gia tri thu %d cua mang\n",i+1);
					scanf("%d",&a[i]);
				}
				printf("\n");
				break;
			case 2:
				for(int i = 0; i<n; i++){
					printf("arr[%d] = %d\n", i, a[i]);
				}
				printf("\n");
				break;
			
    		case 3:
				break;
   			case 4: 
				break;
   			case 5:

    			int new_value;
    			printf("Nhap gia tri moi de them vao dau mang: ");
    			scanf("%d", &new_value);

    			for (int i = n; i > 0; i--) {
        			a[i] = a[i - 1];
    			}

   				a[0] = new_value; 
    			n++;  

   				printf("Mang sau khi them: ");
   				for (int i = 0; i < n; i++) {
      				printf("%d ", a[i]);
    			}			
    			printf("\n");
				break;
   			case 6:

  				int viTri;
   				printf("Nhap vi tri muon xoa (0 <= vi tri < %d): ", n);
    			scanf("%d", &viTri);

    			if (viTri < 0 || viTri >= n) {
       				printf("Vi tri khong hop le.\n");
    			} else {
       				for (int i = viTri; i < n - 1; i++) {
           			 a[i] = a[i + 1];  
       				}
      			n--; 

       			printf("Mang sau khi xoa: ");
        		for (int i = 0; i < n; i++) {
            		printf("%d ", a[i]);
        			}
        		printf("\n");
    			}

				break;
			case 7:
			for (int i = 0; i < n - 1; i++) {
        		int max_idx = i;
        		for (int j = i + 1; j < n; j++) {
            		if (a[j] > a[max_idx]) {
                		max_idx = j;
            		}
        		}
        	int temp = a[max_idx];
       		a[max_idx] = a[i];
        	a[i] = temp;
    		}
   		 	printf("Mang sau khi sap xep giam dan: ");
    		for (int i = 0; i < n; i++) {
        		printf("%d ", a[i]);
    		}
    		printf("\n");

			break;
			case 8:
				break;
			case 9:
   				break;
			case 10:
    		for (int i = 0; i < n / 2; i++) {
        		int temp = a[i];
        		a[i] = a[n - i - 1];
        		a[n - i - 1] = temp;
    		}

    		printf("Mang sau khi dao nguoc: ");
    		for (int i = 0; i < n; i++) {
        		printf("arr[%d] = %d - %s\n", i, a[i], (a[i] % 2 == 0) ? "chan" : "le");
    		}
    			printf("\n");
			break;
			case 11:
				printf("Thoat\n");
				break;
			
			default:
				printf("moi ban nhap tu 1-11\n");
				break;   	
}
			
		}
	}

