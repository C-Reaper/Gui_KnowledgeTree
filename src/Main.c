#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/KnowledgeTree.h"

KnowledgeTree kt;

void Setup(AlxWindow* w){
	kt = KnowledgeTree_New();
    KnowledgeTree_Load(&kt,"./data/Root.yaml");
	
	Hashmap_Print(&kt.yamls);
}
void Update(AlxWindow* w){
	KnowledgeTree_Update(&kt,w->Strokes,GetMouse());

	Clear(BLACK);

	KnowledgeTree_Render(&kt,WINDOW_STD_ARGS);
}
void Delete(AlxWindow* w){
	KnowledgeTree_Save(&kt);
	KnowledgeTree_Free(&kt);
}

int main(){
    if(Create("Knowledge Tree",1920,1080,1,1,Setup,Update,Delete))
        Start();
    return 0;
}