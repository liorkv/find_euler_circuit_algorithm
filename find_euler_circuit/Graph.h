#pragma once
#include <list>

class Graph {
private:
	char isDirected;
	int n;
	int m;
	std::list<int>* adjList;

public:
	Graph(char isDirected, int n, int m);
	~Graph();

	std::list<int> getEulerCircuit();

	std::list<int> findCircuit(int v0, bool** visited);


	int findUnvisitedEdge(bool** visited, int v);

	bool hasUnvisitedEdge(bool** visited, int v);

	void addEdge(int u, int v);

	bool isEulerian();

	bool isGraphConnected();

	void Visit(bool* visited, int nodeIndex);

	void printGraph();

	bool** createVisitedArray();

	static bool getGraphDirectionInput(char& isDirected);

	static bool getGraphSizeInput(int& n, int& m);

	bool getGraphEdgesInput(int m);

	void printEulerianResult();

};