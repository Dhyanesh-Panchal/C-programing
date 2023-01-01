cout << "Enter the length:";
    int size;
    cin >> size;
    int ele;

    cout << "Enter the values for BST:";
    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        root1 = Insert(root1, ele);
    }
    cout << "The tree is Created.\nInorder Traversal: ";
    InOrdertraversal(root1);
    cout << "\nPreorder Traversal: ";
    PreOrderTraversal(root1);
    cout << "\nPostorder Traversal: ";
    PostOrderTraversal(root1);
