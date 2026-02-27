#include<bits/stdc++.h>
using namespace std;

void explainpair()
{
    pair < int, int> p = { 1,3};
    cout<<p.first << " " <<p.second;

    pair<int , pair<int ,int>> p = { 1,{3,4}};
    cout<< p.first << " " << p.second.second << " "<<p.second.first;
    pair <int, int> arr[] = {{1,2},{2,5}, {5,1}};
    cout<<arr[1].second;

}



void explainVector()
{
    vector<int> b;
    v.push_back{1};
    v.emplace_back{2};

    vector<pair<int,int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);
    vector <int> :: iterator it = v.begin();
    it++;
    cout<< *(it) << " ";
}



vector<int>::iterator it = v.begin();
it++;
cout<<*(it) << " ";

it = it * 2;
cout<<*(it) <<" ";

vector<int>::iterator it = v.end();
vector<int>::iterator it = v.rend();
vector<int>::iterator it = v.rbegin();

cout<< v[0] << " "<<v.at(0);
cout<<v.back() << " "


for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
cout<<*(it)<<" ";
}

for (auto it = v.begin(); it !=v.end(); it++){
    cout<<*(it)<<  " ";
}
for (auto it : v )
{
    cout<<it <<" ";

}

v.erase(v.begin()+1);
v.erase(v.begin()+2, v.begin() +4);


// insert fxn

vector<int> v(2,100);
v.insert(v.begin(), 300);
v.insert(v.begin()+ 1,2,10);

vector<int> copy(2,50);
v.insert(v.begin(),copy.begin(), copy.end());
cout<<v.size();

v.pop_back();

v1.swap(v2);
v.clear();
cout<<v.empty();
}

void explainList() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);

    ls.emplace_front(); { 2,4};
}


void explainDeque()
{
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
}


void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout<<st.top();

    st.pop();
    cout<< st.top();
    cout<<st.size();
    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5

    cout<< q.back();
    cout<<q.front();
    q.pop();

    cout<<q.front();
}

void explainPQ()
{
    priority_queue<int>pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top();
    pq.pop();
    cout<< pq.top();



    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top();
}

void explainSet() {
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3);

    auto it = st.find(6);
    st.erase(5);


    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    auto it1 =st.find(2);
    auto it2 =st.find(4);
    st.erase(it1,it2);

    auto it = st.lower_bound(2);


    void explainMultiset() {
        multiset<int>ms;

        ms.insert(1);
        ms.insert(1);
        ms.insert(1);

        ms.erase(1);

        int cnt = ms.count(1);

        ms.erase(ms.find(1));

        ms.erase(ms.find(1), ms.find(1)+2)
    }
}


void explainMap()
{
    map<int,int> mpp;


    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int > mpp;

    map[1] =2;
    mpp.emplace({3,1});

    mpp.insert({2,4});

    mpp[{2,3}] = 10;

    for(auto it : mpp) {
        cout<< it.first <<"" <<it.second <<endl;
        cout<<mpp[1];
        cout<<mpp[5];

        auto it = mpp.find(3);
        cout<<*(it).second;

        auto it= mpp.find(5);
        auto it = mpp.lower_bound(2);

        auto it = mpp.upper_bound(3);
    }


    void explainMultimap()
    {
        
    }
}

bool comp (pair<int, int > p1, pair <int ,int> p2){

}


