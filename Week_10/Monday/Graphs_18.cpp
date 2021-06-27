void Graph::greedyColoring()
{
    int result[V];
 
    result[0]  = 0;

    for (int u = 1; u < V; u++)
        result[u] = -1;  
 

    bool available[V];
    for (int cr = 0; cr < V; cr++)
        available[cr] = false;
 
    for (int u = 1; u < V; u++)
    {

        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (result[*i] != -1)
                available[result[*i]] = true;

        int cr;
        for (cr = 0; cr < V; cr++)
            if (available[cr] == false)
                break;
 
        result[u] = cr; 

        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (result[*i] != -1)
                available[result[*i]] = false;
    }
    for (int u = 0; u < V; u++)
        cout << "Vertex " << u << " --->  Color "
             << result[u] << endl;
}
 