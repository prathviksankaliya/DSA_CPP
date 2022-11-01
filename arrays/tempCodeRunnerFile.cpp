int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            cout << arr[i] << endl;
        }
        count = 0;
    }