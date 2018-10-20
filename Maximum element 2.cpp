#include<bits/stdc++.h>
using namespace std;
class TrackMaxInStack {

	// objective here is to keep track of maximum value in a stack of integers
	// create another another Stack which will keep track of maximum
	stack< int> main;

    // tack to keep track of max element
    stack< int> track;


public:
	 void insert(int x) {
		if (main.isEmpty()) { // if stack is empty, insert the number in both
								// stacks
			main.push(x);
			track.push(x);
		} else {
			// check if number in Stack(track) is bigger than x
			// which ever is bigger, insert it into Stack

			int a = track.top();
			track.push(Math.max(a, x));
			main.push(x); // insert it into main stack.
		}
	}

	 int remove() {
		if (!main.isEmpty()) { // pop the top elements
			track.pop();
			return main.pop();
		}
		return 0;
	}

	 int getMax() {
		return track.top();
	}
}


int main()
{
    int  mx;
    TrackMaxInStack s;
    int n,n1;
    int n2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&n1);
        if(n1==1) {scanf("%d",&n2);
        s.insert(n2);
        mx=s.getMax();}
        if(n1==2) s.remove();
        if(n1==3) printf("%d\n",mx);

    }
    return 0;
}
