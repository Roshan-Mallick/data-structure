#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int roll_id;
    float cgpa;
};

int main () {

    int n , i , j;

    printf("Enter number of students : ");
    scanf("%d",&n);

    getchar();

    struct student data[n] , temp;

    // input details
    for (i = 0; i < n; i++) {

        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name : ");
        fgets(data[i].name, sizeof(data[i].name), stdin);

        printf("Enter roll id : ");
        scanf("%d", &data[i].roll_id);

        printf("Enter CGPA : ");
        scanf("%f", &data[i].cgpa);

        getchar();
    }

    // sorting by CGPA descending
    for (i = 0; i < n - 1; i++) {

        for (j = i + 1; j < n; j++) {

            if (data[i].cgpa < data[j].cgpa) {

                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // display
    printf("\nStudent Details\n");

    for (i = 0; i < n; i++) {

        printf("\nName : %s\n", data[i].name);
        printf("Roll id : %d\n", data[i].roll_id);
        printf("CGPA : %.2f\n", data[i].cgpa);
    }

    return 0;
}
