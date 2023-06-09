# Задача комивояжера
## Постановка задачи
Реализовать граф и решить для него задачу Коммивояжера методом ветвей и границ:
- Создать класс Graph;
- Модифицировать граф таким образом, чтобы для этого графа можно было решить задачу Коммивояжера;
- Проработать визуализирующую часть в программе средствами открытых кроссплатформенных графических библиотек в части построения графа.

## Анализ задачи
- Для решения всех поставленных задач необходимо реализовать отдельный параметризованный класс ```Graph```. Данный класс будет содержать матрицу смежности, реализованную как вектор векторов и вектор вершин графа:
<img src="./1.png">
- Для вектора вершин необходимо реализовать отдельный класс вершины графа:
<img src="./2.png">
- Добавление и удаление вершин происходит следующим образом:
<img src="./3.png">
<img src="./4.png">
- Добавление и удаление рёбер осуществляется с помощью работы с матрицей смежности:
<img src="./5.png">
<img src="./6.png">
- Для алгоритма решения задачи Коммивояжёра необходима функция по поиску соседей текущей вершины whatNeighbour, возвращающая вектор вершин:
<img src="./7.png">
- Функция нахождения задачи Коммивояжёра:
<img src="./8.png">
<img src="./9.png">
<img src="./10.png">

*****

## Визуализация графа выполнена с помощью графической библиотеки SFML. Для реализации были написаны следующие классы:
1. VertexCircle - вершина графа, реализованная с помощью кольца. Сам класс наследуем от класса Drawable, определенного в библиотеке SFML. 
<img src="./visual1.png">
<img src="./visual2.png">
2. Класс EdgeLine - ребро, реализованное с помощью вершин Vertex и VertexCircle. Сам класс наследуем от класса Drawable, определенного в библиотеке SFML.
<img src="./visual3.png">
<img src="./visual4.png">
<img src="./visual5.png">
<img src="./visual6.png">
3. Класс Button - кнопка, реализованная с помощью прямоугольника. Имеет два режима - нажата или не нажата. Сам класс наследуем от класса Drawable, определенного в библиотеке SFML.
<img src="./visual7.png">
<img src="./visual8.png">
4. Класс Tip - вспомогательный класс, дающий пользователю подсказки о работе с интерфейсом программы, а также выдающий ответ на алгоритмы. Сам класс наследуем от класса Drawable, определенного в библиотеке SFML.
<img src="./visual9.png">
<img src="./visual10.png">

*****

## Сама программа является программой управляемой событиями. Она реагирует на следующие события:
1. Нажатие левой клавишей мыши по кнопкам и по вершинам;
2. Нажатие правой клавишей мыши:
по вершинам - при нажатии появляется окно, в котором пользователь вводит новое имя для вершины;
<img src="./visual11.png">
по рёбрам - при нажатии появляется окно, в котором пользователь вводит вес ребра;
<img src="./visual12.png">
3. Движение мыши содержащей вершину с зажатой ЛКМ;

4. “Освобождение” кнопки мыши;

5. Изменение размеров окна.

*****

## Работа программы
<img src="./visual13.png">
<img src="./visual14.png">

## Диаграмма классов
<img src="./class_diagram1.png">
<img src="./class_diagram2.png">

## Исходный код
Исходный код представлен в репозитории: https://github.com/BerdyshevDaniil/ARM_and_SalesmanProblem/tree/main/SalesmanProblem
