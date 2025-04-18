#include<stdio.h>

int main(){
    int i,n=0,j,key,m,pos, temp,ch;
    int arr[100],arr2[100];
    do{
        start:
        system("clear");
        printf("\n%28s","Array Operations");
        printf("\n\n1.Create Data");
        printf("\n2.Display Data");
        printf("\n3.Append Data");
        printf("\n4.Total Number of Record");
        printf("\n5.Search by Position");x        printf("\n6.Update by Position");
        printf("\n7.Delete by Position");
        printf("\n8.Reverse Data ");
        printf("\n9.Sort by Ascending");
        printf("\n10.Sort by Descending");
        printf("\n11.Shift & Insert Single Element");
        printf("\n12 Shift & Insert One Array into Another");
        printf("\n0.Exist");
        printf("\n\nEnter You Choice: ");
        scanf("%d",&ch);
        
        switch(ch){
            case 1: 
                system("clear");
                printf("How many Numbers you want: ");
                scanf("%d",&n);
                
                for(i=0;i<n;i++){
                    printf("Enter No%d: ",i+1);
                    scanf(" %d",&arr[i]);
                }    
                printf("\nData successfully Entered!!");   
                printf("\npress 1 to continue.. "); 
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
            break;
            case 2: 
                system("clear");
                if(n == 0)
                    printf("Array is Empty");
                else{
                    printf("Array Element: ");
                    for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                }    
                printf("\n\npress 1 to continue..");
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
            break;
            case 3: 
                system("clear");
                printf("How many More Elements you want: ");
                scanf("%d",&m);
                for(i=n;i<n+m;i++){
                    printf("Enter No%d: ",i+1);
                    scanf(" %d",&arr[i]);
                }
                n = n+m; // updating
                printf("Data Appended Successfully...");
                printf("\npress 1 to continue");
                scanf("%d",&ch);
            break;
            case 4: 
                system("clear");
                printf("Total No of Data = %d",n);
                printf("\npress 1 to continue..");
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
            break;
            case 5: 
                system("clear");
                printf("Enter Position to Search: ");
                scanf("%d",&pos);
                
                if(pos>n)
                    printf("Index out of Bounds!!");
                else
                    printf("Element at %d Position = %d",pos,arr[pos-1]);    
                printf("\npress 1 to continue..");  
                scanf("%d",&ch);  
                if(ch==1)
                    goto start;
            break;
            case 6: 
                system("clear");
                printf("Enter Position to Update: ");
                scanf("%d",&pos);
                
                if(pos>n)
                    printf("Index out of bounds!");
                else{
                    printf("Element at %d Position = %d",pos,arr[pos-1]);
                    printf("\nEnter No to Update: ");
                    scanf("%d",&arr[pos-1]);
                    printf("\nElement Updated successfully!!");
                }    
                printf("\npress 1 to continue..");
                scanf("%d",&ch);
                if(ch == 1)
                    goto start;
            break;
            case 7: 
                system("clear");
                printf("Enter Position to Delete: ");
                scanf("%d",&pos);
                if(pos>n)
                    printf("Index Out of Bounds!!");
                else{
                    printf("%d Deleted successfully",arr[pos-1]);
                    for(i=pos-1;i<n;i++)
                        arr[i] = arr[i+1];
                    n--;
                }    
                printf("\npress 1 to continue..");
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
            break;
            case 8: 
                system("clear");
                printf("Reverse Data\n");
                for(i=n-1;i>=0;i--)
                    printf("%d ",arr[i]);
                printf("\npress 1 to continue..");    
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
            break;
            case 9: 
                system("clear");
                for(i=0;i<n;i++){
                    for(j=i+1;j<n;j++){
                        if(arr[i]>arr[j]){
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }    
                    }
                }
                printf("\nSorted Data by Ascending\n");
                    for(i=0;i<n;i++){
                        printf("%d ",arr[i]);
                    }
                printf("\npress 1 to continue..");   
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
                    
            break;
            case 10:
                system("clear");
                for(i=0;i<n;i++){
                    for(j=i+1;j<n;j++){
                        if(arr[i]<arr[j]){
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }    
                    }
                
                }
                 printf("Sorted Data by descending\n");
                 for(i=0;i<n;i++){
                     printf("%d ",arr[i]);
                 }
                 printf("\npress 1 to continue..");
                 scanf("%d",&ch);
                 if(ch==1)
                     goto start;
            break;     
            case 11: 
                system("clear");
                printf("Enter Element to Insert: ");
                scanf("%d",&key);
                printf("Enter Position to Insert: ");
                scanf("%d",&pos);
                for(i=n-1;i>=pos-1;i--){
                    arr[i+1] =  arr[i];
                    
                }
                arr[pos-1] = key;
                n++;
                
                printf("Element Inserted Successfully!!");
                printf("\npress 1 to continue..");
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
                
            break;
            case 12: 
                system("clear");
                printf("How many Numbers you  want to Insert: ");
                scanf("%d",&m);
                
                printf("Enter %d Numbers\n",m);
                for(i=0;i<m;i++){
                    printf("Enter No%d: ",i+1);
                    scanf("%d",&arr2[i]);
                }    
                printf("Enter Position to Insert: ");
                scanf("%d",&pos);
                for(i=n-1;i>=pos-1;i--){
                    arr[i+m] = arr[i];
                }
                n++;
                for(i=0;i<m;i++){
                    arr[pos-1] = arr2[i];
                }
                
                
            break;
            case 0: 
                printf("\nGOODBYE!!\n");
            break;
            default:
                printf("\nInvalid Option!!");
        
        }
    
    
    }while(ch!=0);
    


}