#include <Geode/Geode.hpp>

using namespace geode::prelude;


#include <Geode/modify/EditorUI.hpp>
class $modify(MyEditorUI, EditorUI) {
    void onDuplicate(CCObject* sender) {
        createUndoSelectObject(true);
        EditorUI::onDuplicate(sender);
    }
    void doPasteObjects(bool p0) {
        if(getSelectedObjects()->count()){
            createUndoSelectObject(true);
        }
        EditorUI::doPasteObjects(p0);
    }

};