#ifndef CONTEXT_H
#define CONTEXT_H

#include <QString>
#include <QVector>

class Entity;
class BasicBuff;

/// Context(from, vector(to), damageDone, armorGained, hpHealed, effectGiven)
struct Context
{
    Context()
        : from(nullptr)
        , to({})
        , damageDone(0)
        , armorGained(0)
        , hpHealed(0)
        , actAltered(0)
        , buffGiven("")
    {}
    Entity* from = nullptr;
    QVector<Entity*> to = {};
    int damageDone = 0;
    int armorGained = 0;
    int hpHealed = 0;
    int actAltered = 0;
    QString buffGiven = ""; // Using buffID
};

#endif // CONTEXT_H
