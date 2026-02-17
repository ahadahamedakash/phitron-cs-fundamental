#include <bits/stdc++.h>

using namespace std;

class Graph
{
private:
    unordered_map<string, unordered_set<string>> adjList;

public:
    void printGraph()
    {
        for (auto [vertex, edges] : adjList)
        {
            cout << vertex << ": [ ";
            for (auto edge : edges)
            {
                cout << edge << " ";
            }

            cout << "]" << endl;
        }
    }

    bool addVertex(string vertex)
    {
        if (adjList.count(vertex) == 0)
        {
            adjList[vertex];
            return true;
        }
        return false;
    }

    bool addEdge(string v1, string v2)
    {
        if (adjList.count(v1) != 0 && adjList.count(v2) != 0)
        {
            adjList.at(v1).insert(v2);
            adjList.at(v2).insert(v1);

            return true;
        }

        return false;
    }

    bool removeEdge(string v1, string v2)
    {
        if (adjList.count(v2) != 0 && adjList.count(v2) != 0)
        {
            adjList.at(v1).erase(v2);
            adjList.at(v2).erase(v1);

            return true;
        }

        return false;
    }

    bool removeVertex(string vertex)
    {
        if (adjList.count(vertex) == 0)
            return false;

        for (auto otherVertex : adjList.at(vertex))
        {
            adjList.at(otherVertex).erase(vertex);
        }

        adjList.erase(vertex);
        return true;
    }
};

int main()
{
    Graph *myGraph = new Graph();

    myGraph->addVertex("A");
    myGraph->addVertex("B");
    myGraph->addVertex("C");
    myGraph->addVertex("D");

    myGraph->addEdge("A", "B");
    myGraph->addEdge("B", "C");
    myGraph->addEdge("C", "D");

    // myGraph->printGraph();

    // cout << endl;

    myGraph->removeEdge("B", "C");

    myGraph->removeVertex("D");

    myGraph->printGraph();

    return 0;
}
