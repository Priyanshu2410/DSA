class Queue {
    int front, rear;
    vector<int> arr;
    int cnt;
public:
    Queue()
    {
        front = 0;
        rear = 0;
        arr.resize(100001);
        cnt=0;
    }

    void enqueue(int e)
    {
    arr[rear % arr.size()] = e;
    rear++;
    cnt++;
}
    int dequeue()
    {
    if (cnt == 0)

        return -1;
    int dequeuedElement = arr[front % arr.size()];
    arr[front % arr.size()] = -1;
    front++;
    cnt--;
    return dequeuedElement;

}

};