// You're given 2 huge integers represented by linked lists. Each linked list element is a number from 0 to 9999 that represents a number with exactly 4 digits. The represented number might have leading zeros. Your task is to add up these huge integers and return the result in the same format.

// Example

// For a = [9876, 5432, 1999] and b = [1, 8001], the output should be
// solution(a, b) = [9876, 5434, 0].
// Explanation: 987654321999 + 18001 = 987654340000.

// For a = [123, 4, 5] and b = [100, 100, 100], the output should be
// solution(a, b) = [223, 104, 105].
// Explanation: 12300040005 + 10001000100 = 22301040105.

// reference:philmcl42
// Definition for singly-linked list:
// typedef struct list_##name {
//   type value;
//   struct list_##name *next;
// } list_##name;
//
// list_##name *alloc_list_##name(type v) {
//   list_##name *l = calloc(1, sizeof(list_##name));
//   l->value = v;
//   return l;
// }
// 

void add_bignum_lists(list_integer *a, list_integer *b)
{
    if (a->next) //implies b->next as well, since equal length
    {
        add_bignum_lists(a->next, b->next);
        a->value += a->next->value / 10000;
        a->next->value %= 10000;
    }
    a->value += b->value;
}

list_integer * solution(list_integer * a, list_integer * b) {
    //first let's measure list lengths so we can match up the ends
    int len_a = 0;
    int len_b = 0;
    list_integer *runner_a, *runner_b;
    for (runner_a = a; runner_a; runner_a = runner_a->next)
        len_a++;
    for (runner_b = b; runner_b; runner_b = runner_b->next)
        len_b++;
    
    //now let's add some blank items to the shorter one to sync them up
    if (len_a > len_b)
        for (int i = 0 ; i < len_a - len_b; i++)
        {
            list_integer *blank = alloc_list_integer(0);
            blank->next = b;
            b = blank;
        }
    else
        for (int i = 0; i < len_b - len_a; i++)
        {
            list_integer *blank = alloc_list_integer(0);
            blank->next = a;
            a = blank;
        }
    
    //now we can do a cool recursive solution!
    add_bignum_lists(a, b);
    //might need to do one last carry
    if (a->value >= 10000)
    {
        list_integer *head = alloc_list_integer(a->value / 10000);
        head->next = a;
        a->value %= 10000;
        a = head;
    }
    return a;
}
