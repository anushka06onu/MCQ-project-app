#include <stdio.h>
#include <string.h>


// making a simple structure for team member information

struct member{
    char name[30];
    char id[30];
    int age;
};

// making function

void function_for_menu2()
{
    printf("\t---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t step-1) Select the 2nd option by typing option no.\n");
    printf("\t\t\t step-2) Ans all the question.\n");
    printf("\t\t\t step-3) Each correct answer you'll get 1.\n");
    printf("\t\t\t step-4) Each incorrect answer you'll get -0.25.\n");
    printf("\t\t\t step-5) And then, finally you will get final result.\n");
    printf("\t\t\t step-6) At the end you will have an option to go back to main menu by typing 1 or any other key to exit the program.\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n\n");
}

int main()
{
    struct member mem1, mem2, mem3, mem4; // define member for structure
    //----------------------------------------------------------------------
    strcpy(mem1.name, "Abdus Salam");
    strcpy(mem1.id, "0242310005101066");
    mem1.age = 22;
    strcpy(mem2.name, "Fateha hossain Anushka");
    strcpy(mem2.id, "0242310005101844");
    mem2.age = 22;
    strcpy(mem3.name, "Salamoon Alam Moon");
    strcpy(mem3.id, "0242310005101612");
    mem3.age = 24;
    strcpy(mem4.name, "Aminul Islam Reaz");
    strcpy(mem4.id, "0242310005101371");
    mem4.age = 29;
    //----------------------------------------------------------------------


    // all necessary variabe declare here---------------

    int i, j;
    double wrong = 0, correct = 0;
    double total, c_marks = 1, i_c_marks = .25;
    char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, control_menu = '1', control_test = '1', selecting_question_set, menu_no, show_ans;
    char question_set[3] = {'A', 'B', 'C'}; // implementing simple array logic :)
    FILE *file; // file for simply stored students all activity for quiz
    FILE *set_A, *set_B, *set_C; // file for showing students correect ans respectively their set

    printf("\t\t  ------------------------------------------------------------------------------\n");
    printf("\t\t  |                                                                            |\n");
    printf("\t\t  |      Welcome to the demo MCQ application! developed by Noob programmers    |\n");
    printf("\t\t  |                                                                            |\n");
    printf("\t\t  ------------------------------------------------------------------------------\n");

    // ----------------  Make a simple menu part here  ------------------------

    while (control_menu == '1')
    {
        printf("\n\n");
        printf("\t\t\t-----------------------------------------------------------------\n");
        printf("\t\t\t|\t\t\t\t\t\t\t\t|\n");
        printf("\t\t\t|\t1) Take test\t\t2)  How to attend\t\t|\n");
        printf("\t\t\t|\t\t\t\t\t\t\t\t|\n");
        printf("\t\t\t|\t3) About us\t\t4) About project\t\t|\n");
        printf("\t\t\t|\t\t\t\t\t\t\t\t|\n");
        printf("\t\t\t|\t5) Contact us\t\t\t\t\t\t|\n");
        printf("\t\t\t|\t\t\t\t\t\t\t\t|\n");
        printf("\t\t\t-----------------------------------------------------------------\n");

        printf("\t\t\t\tTo access the upper menu type the serial no here : ");
        scanf(" %c", &menu_no);

        printf("\n\n");

        // match condition to access the menu

        if (menu_no == '1')
        {
            while (control_test == '1')
            {


                printf("Hello, There are three different set of question for making exam more competitive. The sets are 'A', 'B', 'C' respectively.\n Now you have an option to choose the set for you. For choosing set you just have type A , B or C. Type your option here : ");
                scanf(" %c", &selecting_question_set);

                while (control_test == '1')
                {

                    // SET A

                    if (selecting_question_set == question_set[0])
                    {
                        correct = 0;
                        wrong = 0;
                        printf("\t\t-----------------------------------------------------------------------------------------\n");
                        printf("\t\t|\tWelcome to the MCQ test! Ans the all the question given below. (10 x 1 = 10)\t|\n");
                        printf("\t\t-----------------------------------------------------------------------------------------\n");
                        printf("\n\n");

                        // question start from here

                        printf("Q1 : C programming was invented in - \n");
                        printf("a)1970\n");
                        printf("b)1972\n");
                        printf("c)1975\n");
                        printf("d)1979\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q1);

                        // condition to check correct

                        switch (q1)
                        {
                        case 'b':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;

                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. C programming was invented in 1972 at the bell laboratory.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q2 : What is the size of char data type ?\n");
                        printf("a)1 Bit\n");
                        printf("b)8 Byte\n");
                        printf("c)8 Bit\n");
                        printf("d)8 Byte\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q2);

                        // condition to check correct

                        switch (q2)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. The char data type is 1 Byte = 8 Bit\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q3 : Which one is the sum of Fibonacci series ?\n");
                        printf("a)1 + 2 + 3 + 4 + 5 + 6 + 7 + 8\n");
                        printf("b)0 + 1 + 1 + 2 + 3 + 6 + 9 + 15\n");
                        printf("c)1 + 2 + 3 + 5 + 8 + 12 + 20 + 32\n");
                        printf("d)0 + 1 + 1 + 2 + 3 + 5 + 8 + 12\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q3);

                        // condition to check correct

                        switch (q3)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;

                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. The first 2 number of Fibonacci series is always 0 and 1, others are just sum of immediate 2 numbers. For example - if immediate 2 number is 2 and 3, the next fibonacci number will be just sum of 2 and 3 which is 5\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q4 : In C programming which one is indicate the address of operator ? \n");
                        printf("a)*\n");
                        printf("b)%%\n");
                        printf("c)~\n");
                        printf("d)&\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q4);

                        // condition to check correct

                        switch (q4)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. The ampersand (&) is used for addressing something in C\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q5 : Which one is the correct identifier in the following ? \n");
                        printf("a)_photographerMoon\n");
                        printf("b)!noob-salam\n");
                        printf("c)cute-reaz\n");
                        printf("d)420_Anushka\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q5);

                        // condition to check correct

                        switch (q5)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. Identifier cannot start with number , cant't contain -,! as well\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q6 :How is an array initialized in C language? \n");
                        printf("a)int a[3] = {1,2,3};\n");
                        printf("b)int a = {1,2,3};\n");
                        printf("c)int a[] = new int [3];\n");
                        printf("d)int a(3) = [1,2,3];\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q6);

                        // condition to check correct

                        switch (q6)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. The correct way of initialization of an array is Option a.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q7 :How to find the length of an array in C? \n");
                        printf("a)sizeof(a)\n");
                        printf("b)sizeof(a[0])\n");
                        printf("c)sizeof(a)/sizeof(a[0])\n");
                        printf("d)sizeof(a)*sizeof(a[0])\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q7);

                        // condition to check correct

                        switch (q7)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.sizeof operator returns the memory accessed by the variable within it. The total memory accessed by the array divided by memory accessed by its individual element will give the length of the array.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q8:Which of the following is true about return type of functions in C? \n");
                        printf("a)Functions can return any type.\n");
                        printf("b)Functions can return any type except array and functions.\n");
                        printf("c)Functions can return any type except array, functions and union.\n");
                        printf("d)Functions can return any type except array, functions, function pointer and union.\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q8);

                        // condition to check correct

                        switch (q8)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. In C, functions can return any type except arrays and functions. We can get around this limitation by returning pointer to array or pointer to function.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q9 :Which of the following is not a logical operator? \n");
                        printf("a)&&\n");
                        printf("b)!\n");
                        printf("c)||\n");
                        printf("d)|\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q9);

                        // condition to check correct

                        switch (q9)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n&&- Logical AND.\n!- Logical NOT.\n||- Logical OR.\n|- Bitwise OR(used in bitwise manipulations).\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q10 :A C-style comment, simply surround the text with-  \n");
                        printf("a)/* and */\n");
                        printf("b)// and //\n");
                        printf("c)//\n");
                        printf("d)/* and *\\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q10);

                        // condition to check correct

                        switch (q10)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\nA C-style comment, simply surround the text with /* and */.\n");
                        }
                        printf("\n\n");

                        // record question set and ans

                        file = fopen("record.txt", "a");

                        if (file == NULL)
                        {
                            printf("File doesn't exist\n");
                        }
                        else
                        {
                            //printf("File is opened\n");
                            fprintf(file, "Set - %c, Option - %c %c %c %c %c %c %c %c %c %c\n\n", selecting_question_set, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);
                            fclose(file);
                            printf("Your result is successfully stored!\n");
                        }

                        // final calculate the obtained number ---------------------------

                        correct -= wrong;

                        // print the obtained total number ------------------------------

                        if (correct == 10)
                        {
                            printf("Excellent! You have got %.2lf out of 10\n\n", correct);
                            printf("To back to the main menu type '1' here or any other key to exit the program : ");
                            scanf(" %c", &control_menu);
                            if (control_menu == '1')
                            {
                                break;
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else if (correct >= 8)
                        {
                            printf("Good, you have got %.2lf out of 10\n\n", correct);
                            printf("\nEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_A = fopen("a.txt", "r");
                                if(set_A == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_A))
                                    {
                                        show_ans = fgetc(set_A);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_A);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else if (correct >= 6)
                        {
                            printf("You have got %.2lf out of 10\n\n", correct);
                            printf("\nEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_A = fopen("a.txt", "r");
                                if(set_A == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_A))
                                    {
                                        show_ans = fgetc(set_A);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_A);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else
                        {
                            printf("\t\t\tOops! too low mark. You have got %.2lf out of 10. Need to improve > > >\n\n", correct);
                            printf("\n\t\t\tEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }
                            // else{
                            //     control_test = '1';
                            // }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_A = fopen("a.txt", "r");
                                if(set_A == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_A))
                                    {
                                        show_ans = fgetc(set_A);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_A);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                    }

                    else if (selecting_question_set == question_set[1])
                    {
                        correct = 0;
                        wrong = 0;
                        printf("\t\t-----------------------------------------------------------------------------------------\n");
                        printf("\t\t|\tWelcome to the MCQ test! Ans the all the question given below. (10 x 1 = 10)\t|\n");
                        printf("\t\t-----------------------------------------------------------------------------------------\n");
                        printf("\n\n");

                        // QUESTION FOR SET B
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q1:Which of the following is not a valid C variable name?\n");
                        printf("a)int number;\n");
                        printf("b)float rate;\n");
                        printf("c)int variable_count;\n");
                        printf("d)int $main;\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q1);

                        // condition to check correct

                        switch (q1)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nSince only underscore and no other special character is allowed in a variable name,\nit results in an error. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q2:Which of the following cannot be a variable name in C?\n");
                        printf("a)volatile\n");
                        printf("b)true\n");
                        printf("c)friend\n");
                        printf("d)export\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q2);

                        // condition to check correct

                        switch (q2)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nvolatile is C keyword. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q3 :What is #include <stdio.h>?\n");
                        printf("a)Preprocessor directive\n");
                        printf("b)Inclusion directive\n");
                        printf("c)File inclusion directive\n");
                        printf("d)None of the mentioned\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q3);

                        // condition to check correct

                        switch (q3)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q4 :What is the sizeof(char) in a 32-bit C compiler?\n");
                        printf("a) 1 bit\n");
                        printf("b) 2 bits\n");
                        printf("c)1 Byte\n");
                        printf("d)2 Bytes\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q4);

                        // condition to check correct

                        switch (q4)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q5 :What is required in each C program?\n");
                        printf("a)The program must have at least one function.\n");
                        printf("b)The program does not require any function.\n");
                        printf("c)Input data\n");
                        printf("d)Output data\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q5);

                        // condition to check correct

                        switch (q5)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nAny C program has at least one function, and even the most trivial programs can specify additional functions.\n A function is a piece of code. In other words, it works like a sub-program. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q6:How many bytes does \"int = D\" use?\n");
                        printf("a)0\n");
                        printf("b)1\n");
                        printf("c)2 or 4\n");
                        printf("d)10\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q6);

                        // condition to check correct

                        switch (q6)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nThe int type takes 2 or 4 bytes.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q7 :Which is valid expression in c language?\n");
                        printf("a)int my_num = 100,000;\n");
                        printf("b)int my_num = 100000;\n");
                        printf("c)int my num = 1000;\n");
                        printf("d)int my num == 10000;\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q7);

                        // condition to check correct

                        switch (q7)
                        {
                        case 'b':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nSpecial symbol, Space, and comma cannot be used in a variable name in c language. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q8:We cannot use the keyword 'break' simply within ___.\n");
                        printf("a)while\n");
                        printf("b)for\n");
                        printf("c)if-else\n");
                        printf("d)do-while\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q8);

                        // condition to check correct

                        switch (q8)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q9:The correct format of declaring a function is:\n");
                        printf("a) type_of_return name_of_function (argument type);\n");
                        printf("b)type_of_return name_of_function (argument type){}\n");
                        printf("c)type_of_return (argument type) name_of_function;\n");
                        printf("d)all of the above\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q9);

                        // condition to check correct

                        switch (q9)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q10:The format identifier \"%%d\" is used for …………………. datatype?\n");
                        printf("a)int\n");
                        printf("b)char\n");
                        printf("c)long\n");
                        printf("d)float\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q10);

                        // condition to check correct

                        switch (q10)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\n%%d and %%i can be used as a format identifier for int data type. \n");
                        }
                        printf("\n\n");

                         // record question set and ans

                        file = fopen("record.txt", "a");

                        if (file == NULL)
                        {
                            printf("File doesn't exist\n");
                        }
                        else
                        {
                            //printf("File is opened\n");
                            fprintf(file, "Set - %c, Option - %c %c %c %c %c %c %c %c %c %c\n\n", selecting_question_set, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);
                            fclose(file);
                            printf("Your result is successfully stored!\n\n");
                        }

                        // final calculate the obtained number ---------------------------

                        correct -= wrong;

                        // print the obtained total number ------------------------------

                        if (correct == 10)
                        {
                            printf("Excellent! You have got %.2lf out of 10\n\n", correct);
                            printf("To back to the main menu type '1' here or any other key to exit the program : ");
                            scanf(" %c", &control_menu);
                            if (control_menu == '1')
                            {
                                break;
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else if (correct >= 8)
                        {
                            printf("Good, you have got %.2lf out of 10\n\n", correct);
                            printf("\nEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_B = fopen("b.txt", "r");
                                if(set_B == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_B))
                                    {
                                        show_ans = fgetc(set_B);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_B);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else if (correct >= 6)
                        {
                            printf("You have got %.2lf out of 10\n\n", correct);
                            printf("\nEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_B = fopen("b.txt", "r");
                                if(set_B == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_B))
                                    {
                                        show_ans = fgetc(set_B);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_B);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else
                        {
                            printf("\t\t\tOops! too low mark. You have got %.2lf out of 10. Need to improve > > >\n\n", correct);
                            printf("\n\t\t\tEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }
                            // else{
                            //     control_test = '1';
                            // }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_B = fopen("b.txt", "r");
                                if(set_B == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_B))
                                    {
                                        show_ans = fgetc(set_B);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_B);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                    }

                    else if (selecting_question_set == question_set[2])
                    {
                        correct = 0;
                        wrong = 0;
                        printf("\t\t-----------------------------------------------------------------------------------------\n");
                        printf("\t\t|\tWelcome to the MCQ test! Ans the all the question given below. (10 x 1 = 10)\t|\n");
                        printf("\t\t-----------------------------------------------------------------------------------------\n");
                        printf("\n\n");

                        // QUESTION FOR SET C
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q1:Which is the correct order of data types with respect to their size?\n");
                        printf("a)int > char > float\n");
                        printf("b)char > int > float\n");
                        printf("c)char < double < int\n");
                        printf("d)char < int < double\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q1);

                        // condition to check correct

                        switch (q1)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q2 :A global variable is also known as …………………. variable\n");
                        printf("a)external\n");
                        printf("b)internal\n");
                        printf("c)static\n");
                        printf("d)dynamic\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q2);

                        // condition to check correct

                        switch (q2)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q3 :Which of the following statement is true?\n");
                        printf("a)Every line in a C program should end with a semicolon.\n");
                        printf("b)Every C program ends with an END word.\n");
                        printf("c)Comments cause the computer to print the text enclosed between /* and */ when executed.\n");
                        printf("d)A printf statement can generate only one line of output\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q3);

                        // condition to check correct

                        switch (q3)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nEvery line in a C program should end with a semicolon. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q4:Which of the following are not keywords in C?\n");
                        printf("a)printf\n");
                        printf("b)main\n");
                        printf("c)\\IFn");
                        printf("d)All of the above.\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q4);

                        // condition to check correct

                        switch (q4)
                        {
                        case 'c':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nSince “IF” is written in upper case it is not a keyword.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q5:Which of the following arithmetic operator takes only integer operands?\n");
                        printf("a)+\n");
                        printf("b)-\n");
                        printf("c)/\n");
                        printf("d)%%\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q5);

                        // condition to check correct

                        switch (q5)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nThe modulo division (%%) operator produces the remainder of an integer division. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q6:Which among the following operator has the highest priority?\n");
                        printf("a)Comma operator\n");
                        printf("b)Conditional operator\n");
                        printf("c)Rational operator\n");
                        printf("d)Unary plus operator\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q6);

                        // condition to check correct

                        switch (q6)
                        {
                        case 'd':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q7:What is the correct order of precedence of arithmetic operators from highest to lowest?\n");
                        printf("a)%%, *, /, +, -\n");
                        printf("b)-, +, *, /, %%\n");
                        printf("c)%%, +, -, *, /\n");
                        printf("d)+, - , %%, *, /\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q7);

                        // condition to check correct

                        switch (q7)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q8:What is the use of sizeof() operator?\n");
                        printf("a)To get the size of data types or variables in bytes\n");
                        printf("b)To get the size of variables only\n");
                        printf("c)To get the size of the structure only\n");
                        printf("d)None of the above\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q8);

                        // condition to check correct

                        switch (q8)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect. \n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q9:What is a while loop?\n");
                        printf("a)Repeats the loop if the condition applies true\n");
                        printf("b)Processes the code at least once and then repeats\n");
                        printf("c)Repeats only once\n");
                        printf("d)All of the above\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q9);

                        // condition to check correct

                        switch (q9)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nRepeats the code infinitely. The while loop, unlike the do-while loop,\ncan only execute the code only if the boolean condition is satisfied, then can run infinitely if needed.\n");
                        }
                        printf("\n\n");
                        //---------------------------------------------------------------------------------------------------------------

                        printf("Q10: What is scanf() in c programming?\n");
                        printf("a)The layout of an input string\n");
                        printf("b)Array\n");
                        printf("c)Output function\n");
                        printf("d)All of the above\n");
                        printf("\nType the ans here : ");
                        scanf(" %c", &q10);

                        // condition to check correct

                        switch (q10)
                        {
                        case 'a':
                            printf("\nCorrect\n");
                            correct += c_marks;
                            break;
                        default:
                            wrong += i_c_marks;
                            printf("\nIncorrect.\n\nLayout of an input string.\nThe scanf() seems to be used with functions that help in reading formatted input data and helps in categorizing them into various data types.\nThe scanf() can help identify what kind of data type an input seems to be.\n");
                        }
                        printf("\n\n");

                         // record question set and ans

                        file = fopen("record.txt", "a");

                        if (file == NULL)
                        {
                            printf("File doesn't exist\n");
                        }
                        else
                        {
                            //printf("File is opened\n");
                            fprintf(file, "Set - %c, Option - %c %c %c %c %c %c %c %c %c %c\n\n", selecting_question_set, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);
                            fclose(file);
                            printf("Your result is successfully stored!\n\n");
                        }

                        // final calculate the obtained number ---------------------------

                        correct += wrong;

                        // print the obtained total number ------------------------------

                        if (correct == 10)
                        {
                            printf("Excellent! You have got %.2lf out of 10\n\n", correct);
                            printf("To back to the main menu type '1' here or any other key to exit the program : ");
                            scanf(" %c", &control_menu);
                            if (control_menu == '1')
                            {
                                break;
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else if (correct >= 8)
                        {
                            printf("Good, you have got %.2lf out of 10\n\n", correct);
                            printf("\nEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }

                             // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_C = fopen("c.txt", "r");
                                if(set_C == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_C))
                                    {
                                        show_ans = fgetc(set_C);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_C);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else if (correct >= 6)
                        {
                            printf("You have got %.2lf out of 10\n\n", correct);
                            printf("\nEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_C = fopen("c.txt", "r");
                                if(set_C == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_C))
                                    {
                                        show_ans = fgetc(set_C);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_C);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                        else
                        {
                            printf("\t\t\tOops! too low mark. You have got %.2lf out of 10. Need to improve > > >\n\n", correct);
                            printf("\n\t\t\tEnter '1' to take the test and '2' for getting ans and any other key to exit : ");
                            scanf(" %c", &control_test);
                            if (control_test == '1')
                            {
                                printf("\nAGAIN - \n\n");
                            }
                            // else{
                            //     control_test = '1';
                            // }

                            // showing result from file-----------------------------------------

                            else if(control_test == '2'){
                                set_C = fopen("c.txt", "r");
                                if(set_C == NULL){
                                    printf("File is not found\n");
                                }
                                else{
                                    while (!feof(set_C))
                                    {
                                        show_ans = fgetc(set_C);
                                        printf("%c", show_ans);
                                    }

                                    printf("\n");

                                    fclose(set_C);
                                }
                            }
                            else{
                                control_menu = '2';
                            }
                        }
                    }
                }
            }

            control_test = '1';
        }

        else if (menu_no == '2')
        {
            //-----------------------working on here--------
            function_for_menu2();

            printf("\t\t\tTo back to the main menu type '1' here or any other key to exit the program : ");
            scanf(" %c", &control_menu);
        }
        else if (menu_no == '3')
        {
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("We are fresher in programming community.Our aim is to become a professional programmer one day.Our team has four members.\nThey are Fateha Hossain Anushka, Aminul islam reaz, Salamoon alam moon and Mohammed Abdus Salam.\nWe hope that our project will be the greatest one. Thank you.\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");

            printf("To back to the main menu type '1' here or any other key to exit the program : ");
            scanf(" %c", &control_menu);
        }
        else if (menu_no == '4')
        {
            printf("\t-------------------------------------------------------------------------------------------------------\n\n");
            printf("The project name is \"MCQ application\". It is a interactive application using C programming. It is build by \"data type, variable\n, conditional control statement (like if else, else if  and if), loop control statement (like while, ---, ---), operator,function,array.\nIt will developed by other key concept day by day. Keep in eyes on \"Noob Programmers\"!:)\n\n");
            printf("\t-------------------------------------------------------------------------------------------------------\n\n");

            printf("To back to the main menu type '1' here or any other key to exit the program : ");
            scanf(" %c", &control_menu);
        }
        else if (menu_no == '5')
        {
            printf("\t---------------------------------------------------------------------------------------------------------\n");
            printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
            printf("\t|\tSection - C, CSE-64, Spring-2023\t\t\t\t\t\t\t\t|\n");
            printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
            printf("\t|\tName : %s\t\t\t\t\t\t\t\t\t\t|\n",mem1.name);
            printf("\t|\tID : %s\t\t\t\t\t\t\t\t\t\t|\n", mem1.id);
            printf("\t|\tAge : %d\t\t\t\t\t\t\t\t\t\t\t|\n", mem1.age);
            printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
            printf("\t|\tName : %s\t\t\t\t\t\t\t\t\t|\n",mem2.name);
            printf("\t|\tID : %s\t\t\t\t\t\t\t\t\t\t|\n", mem2.id);
            printf("\t|\tAge : %d\t\t\t\t\t\t\t\t\t\t\t|\n", mem2.age);
            printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
            printf("\t|\tName : %s\t\t\t\t\t\t\t\t\t|\n",mem3.name);
            printf("\t|\tID : %s\t\t\t\t\t\t\t\t\t\t|\n", mem3.id);
            printf("\t|\tAge : %d\t\t\t\t\t\t\t\t\t\t\t|\n", mem3.age);
            printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
            printf("\t|\tName : %s\t\t\t\t\t\t\t\t\t|\n",mem4.name);
            printf("\t|\tID : %s\t\t\t\t\t\t\t\t\t\t|\n", mem4.id);
            printf("\t|\tAge : %d\t\t\t\t\t\t\t\t\t\t\t|\n", mem4.age);
            printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
            printf("\t---------------------------------------------------------------------------------------------------------\n\n");
            printf("To back to the main menu type '1' here or any other key to exit the program : ");
            scanf(" %c", &control_menu);
        }
        else
        {
            printf("Please select correct menu number!\n");
        }
    }

    return 0;
}
