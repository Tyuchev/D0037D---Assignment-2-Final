

#include "libh.h"

bool is_Sorted(int array[], int size)
{

    for (int i = 0; i < (size-1); i++)
    {
        if ((array[i]) > (array[i + 1]))
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}


string create_pal(char* word, int l)
{
    char palin[25] ;
    for (int i = 0; i < l; i++)
    {
        palin[i] = word[(l - 1 - i)];
    }
    return palin;

}


bool is_pal(char* word, string palin, int l)
{
    for (int i = 0; i < l; i++)
    {
        if (word[i] == palin[i])
        {
            continue;
        }
        else
        {
            return false;
        }

    }
    return true;
}


int array_rows_cols(int* p, int c, int r)
{
    int result_column;
    int result_row;


    for (int i = 0; i < (r); i++)
    {
        calculate_row(p, c, i);
    }


    for (int i = 0; i <= c; i++)
    {
        calculate_column(p, c, r, i);
    }

    result_column = calculate_column(p, c, r, c);
    result_row = calculate_row(p, c, r);

    *(p + c + ((r * (30)))) = (result_column + result_row);

    for (int i = 0; i <= r; i++)
    {
        print_row(p, c, i);
    }


    cout << endl;

    return 0;
}



int calculate_row(int* p, int c, int t)
{
    int result = 0;

    for (int i = 0; i < (c); i++)
    {
        result = result + *(p + (t * (30)) + i);
    }
    *(p + (t * (30) + c)) = result;

    return result;
}


int calculate_column(int* p, int c, int r, int t)
{
    int result = 0;

    for (int i = 0; i < (r); i++)
    {
        result = result + *(p + t + ((30) * i));
    }
    *(p + t + ((r * (30)))) = result;

    return result;
}


int print_row(int* p, int c, int t)
{
    int temp;

    for (int i = 0; i < (c + 1); i++)
    {

        temp = *(p + ((t * (30)) + i));
        cout << temp;
        cout << '\t';
    }

    cout << endl;
    return 0;
}


void swap_sort(int* p, int asc)
{
    if (asc == 0)
    {
        sort_decend(p);
    }
    else if (asc == 1)
    {
        sort_ascend(p);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << *(p + i);
        cout << " ";
    }
    cout << endl;
    cout << endl;
}


void swap(int* p, int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort_ascend(int* p)
{

    while (true)
    {
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            if (*(p + i) > *(p + i + 1))
            {
                swap(p, *(p + i), *(p + i + 1));
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }

}


void sort_decend(int* p)
{

    while (true)
    {
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            if (*(p + i) < *(p + i + 1))
            {
                swap(p, *(p + i), *(p + i + 1));
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}


void shrink_array(int* p, int l)
{
    int result;
    for (int i = 0; i < l; i++)
    {
        result = (*(p + (2 * i))) + *(p + 1 + (2 * i));
        *(p + i) = result;
    }

    for (int i = 4; i < l; i++)
    {
        *(p + i) = 0;
    }
    return;
}



int initial(vector<string>& vec)
{
    string user_input;

    cout << "Are you sure you wish to delete? (1 or 0) " << endl;
    ws(cin);
    getline(cin, user_input);
    if (user_input == "1")
    {
        vec.clear();
    }
    return 0;
}


string insert(vector<string>& test_vector)
{
    string user_input;

    while (true)
    {
        cout << "Please input the names you wish to add " << endl;
        ws(cin);
        getline(cin, user_input);
        if (user_input == "q")
        {
            cout << endl;
            cin.clear();
            break;
        }
        else
        {
            test_vector.push_back(user_input);
        }

    }
    return "test";
}


int search(vector<string>& vec)
{
    string element;
    string user_input;
    int vector_size;

    cout << "Please input the names you wish to search for " << endl;
    ws(cin);
    getline(cin, user_input);
    cout << endl;

    vector_size = vec.size();
    for (int i = 0; i < vector_size; i++)
    {
        element = vec[i];
        if (element.find(user_input) != std::string::npos)
        {
            cout << element << endl;
        }
    }

    return 0;
}


int delete_item(vector<string>& vec)
{
    string element;
    string user_input;
    int vector_size;

    cout << "Please input the name you wish to remove " << endl;
    cin.clear();
    cin >> user_input;
    cout << user_input;
    cout << endl;

    vector_size = vec.size();
    for (int i = 0; i < vector_size; i++)
    {
        element = vec[i];
        if (element == user_input)
        {
            vec.erase (vec.begin()+i);
            break;
        }
    }
    return 0;
}


int print_vector(vector<string>& vec)
{

    int vector_size;

    vector_size = vec.size();
    for (int i = 0; i < vector_size; i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}


bool is_Sorted(int array[], int size);

int task1()
{
    int length;
    int user_input;

    cout << "Please input the length of the array you wish to create: " << endl;
    cin >> length;
    int testarray[30];

    cout << "Please input the number of integers you requested earlier: " << endl;

    for (int i = 0; i < length; i++)
    {
        cin >> user_input;
        testarray[i] = user_input;
    }

    cout << endl;
    cout << boolalpha << is_Sorted(testarray, length) << endl;
    cout << endl;
    return 0;
}


int task2()
{
    char* word_check;
    string palin_check;
    string user_input;
    int length;
    bool result;

    cout << "Please input a word: " << endl;
    cin >> user_input;
    word_check = &user_input[0];
    length = strlen(word_check);

    palin_check = create_pal(word_check, length);
    cout << endl;

    result = is_pal(word_check, palin_check, length);
    cout << boolalpha << result << endl;
    cout << endl;

    return 0;
}


int task3()
{
    int columns;
    int rows;
    int* point;

    cout << "Please input the number of columns you would like in the array: " << endl;
    cin >> columns;

    cout << "Please input the number of rows you would like in the array: " << endl;
    cin >> rows;
    cout << endl;

    int empty_array[30][30];
    for (int i = 0; i < (rows); i++)
    {
        for (int j = 0; j < (columns); j++)
        {
            empty_array[i][j] = rand() % 10;
        }
    }

    point = empty_array[0];

    array_rows_cols(point, columns, rows);

    cout << endl;

    return 0;
}


int task4()
{
    int testarray[] = { 1,3,2 };
    int* point;
    int a;
    int b;
    int c;
    bool ascending;


    while (true)
    {
        point = testarray;

        cout << "Please enter an integer (Note: Type 0 to exit): " << endl;
        cin >> a;
        if (a == 0)
        {
            break;
        }
        cout << "Please enter another integer: " << endl;
        cin >> b;
        cout << "Please enter the last integer: " << endl;
        cin >> c;

        cout << "Ascending order (Yes or no)? (Enter 1 or 0): " << endl;
        cin >> ascending;

        testarray[0] = a;
        testarray[1] = b;
        testarray[2] = c;

        swap_sort(point, ascending);
    }
    return 0;
}



int task5()
{
    int testarray[] = { 1,3,2,4,5,6,7,8 };
    int* point;
    int length = 8;

    point = testarray;

    for (int i = 0; i < length; i++)
    {
        cout << testarray[i];
        cout << "\t";
    }
    cout << endl;
    cout << endl;

    shrink_array(point, 8);

    for (int i = 0; i < length; i++)
    {
        cout << testarray[i];
        cout << "\t";
    }
    cout << endl;
    cout << endl;
    return 0;
}


int task6()
{

    vector <string> test_vector;

    while (true)
    {
        string choice;

        cout << "Please choose an option from the following menu: " << endl;
        cout << "Option 1: Initialise Database" << endl;
        cout << "Option 2: Insert" << endl;
        cout << "Option 3: Search" << endl;
        cout << "Option 4: Delete" << endl;
        cout << "Option 5: Print" << endl;
        cout << "Option 6: Quit" << endl;
        cout << endl;

        cin >> choice;

        if (choice == "1")
        {
            initial(test_vector);
            cout << endl;
        }
        if (choice == "2")
        {
            insert(test_vector);
            cout << endl;
        }
        if (choice == "3")
        {
            search(test_vector);
            cout << endl;
        }
        if (choice == "4")
        {
            delete_item(test_vector);
            cout << endl;
        }
        if (choice == "5")
        {
            print_vector(test_vector);
            cout << endl;
        }
        if (choice == "6")
        {
            cout << endl;
            return 0;
        }
    }
}

