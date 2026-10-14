"""adding phone number column for user table

Revision ID: d2b3df9c63bc
Revises:
Create Date: 2026-10-14 18:09:31.128041

"""

from typing import Sequence, Union

from alembic import op
import sqlalchemy as sa

# revision identifiers, used by Alembic.
revision: str = "d2b3df9c63bc"
down_revision: Union[str, Sequence[str], None] = None
branch_labels: Union[str, Sequence[str], None] = None
depends_on: Union[str, Sequence[str], None] = None


def upgrade() -> None:
    """Upgrade schema."""
    op.add_column("users", sa.Column("phone", sa.String(20), nullable=True))
    pass


def downgrade() -> None:
    """Downgrade schema."""
    pass
