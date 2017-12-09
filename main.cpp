//Program uses a vector to carry out a process of elimination.
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void input(vector<int>& suitors);
//Reads in the number of suitors wanting to marry the princess and assigns each
//of them position numbers.

void eliminationProcess(vector<int>& suitors);
//Precondition: All of the elements in vector suitors have been assigned a
//number between 1 and suitors.size().
//Postcondition: Eliminates all but one element in vector suitors, in
//accordance with the princess's elimination procedure.

void output(vector<int>& suitors);
//Precondition: Vector suitors contains only one element.
//Postcondition: Prints out the position a suitor should stand in to marry the
//princess.

int main()
{
    //Creates a list of suitors for the princess.
	vector<int> suitors;

    input(suitors);
    eliminationProcess(suitors);
    output(suitors);

	return 0;
}

void input(vector<int>& suitors)
{
    int size;
    cout<<"\nHow many suitors are there for the beautiful princess Eve? ";
    cin>>size;
    cout<<endl;

    //Assign position numbers to each suitor.
	for (int i = 1; i <= size; i++)
		suitors.push_back(i);
}

void eliminationProcess(vector<int>& suitors)
{
    //Keeps track of the number of suitorss encountered so far.
	int count = 0;

    //Run the list of suitorss through the elimination process until only one
    //is left.
	while (suitors.size() != 1)
	{
        //Loop for each suitors and determine if he should be eliminated.
		for (int j = 0; j < suitors.size(); j++)
		{
			count++;

            //If suitors is the next third shooter, eliminate him.
			if (count%3 == 0)
			{
				suitors.erase(suitors.begin() + j);
				
                //If last suitors has been reached, restart at the beginning.
				if ((j-1) == suitors.size()-1)
					continue;
				count++;
			}
		}
	}
}

void output(vector<int>& suitors)
{
    cout<<"If you want to marry the beautiful princess Eve, you should stand ";
    cout<<"in position "<<suitors[0]<<".\n\n";
}
