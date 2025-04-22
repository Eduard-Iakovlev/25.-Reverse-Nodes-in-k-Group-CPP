# 25. Reverse Nodes in k-Group

Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:

![image](https://github.com/user-attachments/assets/f963257e-2ad7-4f47-8adf-b842dcd2d572)

Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:

![image](https://github.com/user-attachments/assets/7bd8196c-7824-4de7-a6a5-9cabe03faece)

Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 5000
0 <= Node.val <= 1000

# 25. Обратные узлы в k-группе
Решено
Жесткий
Темы
Компании
Учитывая head связанного списка, поменяйте местами узлы списка k за один раз и верните изменённый список.

k является положительным целым числом и меньше или равно длине связанного списка. Если количество узлов не кратно k то оставшиеся узлы в конце должны остаться как есть.

Вы не можете изменять значения в узлах списка, можно изменять только сами узлы.

 

Пример 1:

![image](https://github.com/user-attachments/assets/f963257e-2ad7-4f47-8adf-b842dcd2d572)

Ввод: head = [1,2,3,4,5], k = 2
Вывод: [2,1,4,3,5]
Пример 2:

![image](https://github.com/user-attachments/assets/7bd8196c-7824-4de7-a6a5-9cabe03faece)

Ввод: head = [1,2,3,4,5], k = 3
Вывод: [3,2,1,4,5]
 

Ограничения:

Количество узлов в списке равно n.
1 <= k <= n <= 5000
0 <= Node.val <= 1000
